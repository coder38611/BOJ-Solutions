import os
import glob

for file in set(file for file in glob.glob(
        '*') if file not in glob.glob('*.py')+glob.glob('*.cpp')) - set(['README.md']):
    os.remove(file)
