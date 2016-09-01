#include <Python.h>

#include <iostream>

static PyObject * 
call( PyObject *self, PyObject *args ) {
  char *myString;
   if( !PyArg_ParseTuple(args,"s",&myString) )
     return NULL;
   std::cout << myString << std::endl;
   Py_INCREF(Py_None);
   return Py_None;
}

static char call_docs[] = 
  "call( ): Output supplied string to console.\n";

static PyMethodDef call_funcs[] = {
  {"call", (PyCFunction)call,METH_VARARGS,call_docs},
  {NULL, NULL, 0, NULL}
};

static struct PyModuleDef callmodule = {
  PyModuleDef_HEAD_INIT,
  "call",
  call_docs,
  -1,
  call_funcs
};

//extern "C" void initcall(void) {
//  Py_InitModule3("call",call_funcs,"Print to standard output from Python");
//}

PyMODINIT_FUNC
PyInit_call(void) {
  return PyModule_Create(&callmodule);
}


