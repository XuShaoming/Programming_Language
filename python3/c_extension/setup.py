from distutils.core import setup, Extension
setup(name = 'helloworld2', version = '1.0',  \
	ext_modules = [Extension('helloworld2', ['hello.c'])])

## Output:
#xu-Macbook:c_extension xushaoming$ python test.py 
#Hello, Python extensions!!
#works in python2