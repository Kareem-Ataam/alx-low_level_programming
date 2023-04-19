/**
 * print_name - print the name given to the function
 * @name: The name that will be printed
 * @f: Pointer to the function that will be used to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if(name != NULL && f != NULL)
	{
		f(name);
	}
}
