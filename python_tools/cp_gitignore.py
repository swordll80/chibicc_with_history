import shutil
import os
from pathlib import Path

# Define the source directory and the target directory
source_dir = Path('..')  # Adjust if needed
target_dir = Path('../history')  # Adjust if needed

# Ensure the target directory exists
os.makedirs(target_dir, exist_ok=True)

# Iterate over all files in the source directory
for file in source_dir.glob('.gitignore'):
    if file.is_file():  # Ensure we're copying files, not directories
        # Iterate over all first-level subdirectories in the target directory
        for sub_dir in [d for d in target_dir.iterdir() if d.is_dir()]:
            # Construct the full path where the file will be copied
            destination = sub_dir / file.name
            # Copy the file
            shutil.copy(file, destination)
            print(f"Copied {file} to {destination}")

print("All CMake* files have been copied to the first level subdirectories of '../history/'.")
