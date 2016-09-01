import sys
from distutils.core import setup, Extension

if sys.version_info[0] == 3:

  module = Extension('call',sources = ['call.cpp'])

  setup(name='CPPCall', 
        version='1.0',
        description='Building a Python module from C++ that prints a string to the console',
        ext_modules=[module])

else:
  print("This example requires building with Python 3")

