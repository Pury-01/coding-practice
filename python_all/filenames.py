#!/usr/bin/python3

import argparse

parser = argparse.ArgumentParser(
        prog='top',
        description='show top lines from each file')
parser.add_argument('filenames',nargs='+')
parser.add_argument('-l', '--lines', type=int, default=10)
args = parser.parse_args()
print(args)
