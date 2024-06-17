/**
* print_name - prints a name
* @name: name of the person
* @f: function to print the name
* return: Nothing.
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
return;
}
