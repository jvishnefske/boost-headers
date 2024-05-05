#!/usr/bin/env python3
import pathlib
import argparse
import shutil
import subprocess
import tarfile
import urllib.request
import logging

logging.basicConfig(level=logging.INFO)


def download_extract_boost(version, temp_dir: pathlib.Path):
    # Download the boost archive
    # url = f"https://boostorg.jfrog.io/ui/repos/tree/General/
    # main/release/{version}/source/boost_{version.replace('.', '_')}.tar.bz2"
    alt_version = version.replace('.', '_')
    url = f"https://boostorg.jfrog.io/artifactory/main/release/{version}/source/boost_{alt_version}.tar.bz2"
    file_name = pathlib.Path(temp_dir).joinpath(f"boost_{alt_version}.tar.bz2")
    try:
        if file_name.exists():
            logging.info("skipping download since file exists.")
        else:
            logging.info(f"Downloading Boost archive from {url} to {file_name}")
            urllib.request.urlretrieve(url, file_name)
    except Exception as e:
        logging.error(f"Failed to download Boost archive: {e}")
        return False

    # Replace ./include/boost with the boost directory from the archive
    # remove existing boost headers.
    logging.info("Replacing boost headers...")
    try:
        dest = pathlib.Path("./include/boost")
        logging.debug(f"attempting to remove old headers {dest}")
        shutil.rmtree(dest)
        dest.mkdir()
    except Exception as e:
        logging.error(f"Failed to remove old boost headers: {e}")
        return False

    # Extract the archive. filter only the header folder.
    with tarfile.open(file_name, "r:bz2") as tar:
        logging.info(f"Extracting Boost archive...")

        try:

            def my_filter(info, path):
                if alt_version + "/boost" in info.name:
                    return info
                return None
            tar.extractall(temp_dir, filter=my_filter)
        except Exception as e:
            logging.error(f"Failed to extract Boost archive: {e}")
            return False

    src = temp_dir / f"boost_{alt_version}" / "boost"
    if not src.exists():
        logging.error(f'failed to find extracted folder {src}')
    logging.info(f"moving from {src} to {dest}")
    src.rename(dest)
    return True


def git_commit_and_tag(version):

    # Git commit with changes
    logging.info("Creating git commit...")
    subprocess.run(["git", "add", "include"])
    subprocess.run(["git", "commit", "-m", f"Update Boost to version {version}"])

    # Git tag
    logging.info("Creating git tag...")
    subprocess.run(["git", "tag", f"v{version}"])


def main():
    parser = argparse.ArgumentParser(description="Download and extract Boost archive, replace boost headers,"
                                                 " and create a git commit with changes.")
    parser.add_argument("version", help="Version of Boost to download and extract")
    args = parser.parse_args()

    # Check if git is available
    if shutil.which("git") is None:
        logging.error("Git is not installed or not in the PATH.")
        return

    # temp_dir =  tempfile.mkdtemp()
    temp_dir = pathlib.Path()/"temp"
    temp_dir.mkdir(exist_ok=True)
    if download_extract_boost(args.version, temp_dir):
        git_commit_and_tag(args.version)
        logging.info("Boost updated and committed successfully!")
    else:
        logging.error("Failed to update Boost.")


if __name__ == "__main__":
    main()
