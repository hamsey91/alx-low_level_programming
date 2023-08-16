#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that print name
 *
 * @name: input type string
 * @f: pointer to function
 *
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

