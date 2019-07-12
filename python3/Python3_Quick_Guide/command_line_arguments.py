#!/usr/bin/python3

'''
import sys

print ('Number of arguments:', len(sys.argv), 'arguments.')
print ('Argument List:', str(sys.argv))
'''

'''
xu-Macbook:python3 xushaoming$ python3 command_line_arguments.py 1 2 3
Number of arguments: 4 arguments.
Argument List: ['command_line_arguments.py', '1', '2', '3']
'''

#!/usr/bin/python3

import sys, getopt

def main(argv):
   inputfile = ''
   outputfile = ''
   try:
      opts, args = getopt.getopt(argv,"hi:o:",["ifile=","ofile="])
   except getopt.GetoptError:
      print ('test.py -i <inputfile> -o <outputfile>')
      sys.exit(2)
   for opt, arg in opts:
      if opt == '-h':
         print ('test.py -i <inputfile> -o <outputfile>')
         sys.exit()
      elif opt in ("-i", "--ifile"):
         inputfile = arg
      elif opt in ("-o", "--ofile"):
         outputfile = arg
   print ('Input file is "', inputfile)
   print ('Output file is "', outputfile)

if __name__ == "__main__":
   main(sys.argv[1:])

'''
https://www.tutorialspoint.com/python3/python_command_line_arguments.htm

This code is useful for us to customize our own command line.  

xu-Macbook:python3 xushaoming$ python3 command_line_arguments.py -i in -o out
Input file is " in
Output file is " out
'''