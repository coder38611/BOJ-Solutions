import os
import glob

for file in [file for file in glob.glob(
        '*') if file not in glob.glob('*.py')+glob.glob('*.cpp')]:
    os.remove(file)
