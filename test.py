import sys
from call import call

if __name__ == '__main__':

    if len(sys.argv) == 2:
      call(sys.argv[1])
    else:
      print("Usage: python3 test.py YOURTEXTHERE")
