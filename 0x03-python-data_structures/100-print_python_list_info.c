#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prints information about a Python list
 * @p: PyObject representing the Python list
 *
 * Return: None
 */
void print_python_list_info(PyObject *p)
{
    Py_ssize_t size, i;

    size = PyList_Size(p);
    printf("[*] Size of the Python List = %zd\n", size);

    for (i = 0; i < size; i++)
    {
        PyObject *item = PyList_GetItem(p, i);
        const char *typeName = Py_TYPE(item)->tp_name;
        printf("Element %zd: %s\n", i, typeName);
    }
}


