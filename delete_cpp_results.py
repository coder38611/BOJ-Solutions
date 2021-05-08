import os
import glob

for file in set(file for file in glob.glob('!*.*')+glob.glob('*.out')):
    os.remove(file)
