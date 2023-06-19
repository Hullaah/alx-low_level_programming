#include <python3.10/Python.h>
/**
 * op_add - adds two numbers together.
 * @a: number
 * @b: number
 * Return: sum of numbers
*/
PyObject *add(PyObject *a, PyObject *b)
{
        return (PyNumber_Add(a, b));
}
/**
 * op_sub - subtracts two numbers from each other
 * @a: number
 * @b: number
 * Return: difference of numbers
*/
PyObject *sub(PyObject *a, PyObject *b)
{
	return (PyNumber_Subtract(a, b));
}
/**
 * op_mul - multiplies two numbers together.
 * @a: number
 * @b: number
 * Return: product of numbers
*/
PyObject *mul(PyObject *a, PyObject *b)
{
	return (PyNumber_Multiply(a, b));
}
/**
 * op_div - divides a by b
 * @a: number
 * @b: number
 * Return: division of numbers
*/
PyObject *divide(PyObject *a, PyObject *b)
{
	return (PyNumber_TrueDivide(a, b));
}
/**
 * op_mod - gets the remainder of a when divided by b.
 * @a: number
 * @b: number
 * Return: modulus of numbers
*/
PyObject *mod(PyObject *a, PyObject *b)
{
	return (PyNumber_Remainder(a, b));
}
