#include <Python.h>

static PyObject* helloworld2(PyObject* self)
{
   return Py_BuildValue("s", "Hello, Python extensions!!");
}

static char helloworld2_docs[] =
   "helloworld2( ): Any message you want to put here!!\n";

static PyMethodDef helloworld2_funcs[] = {
   {"helloworld2", (PyCFunction)helloworld2, 
   METH_NOARGS, helloworld2_docs},
   {NULL}
};

void inithelloworld2(void)
{
   Py_InitModule3("helloworld2", helloworld2_funcs,
                   "Extension module example!");
}