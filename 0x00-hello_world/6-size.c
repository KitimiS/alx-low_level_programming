#include <stdio.h>
/**
 * main - to print the size of various types of computers
 * Return 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("Size of char: %i byte(s)\n", (unsigned long)
	sizeof(a));
printf("Size of int: %i byte(s)\n", (unsigned long)
	sizeof(b));
printf("Size of long int: %i byte(s)\n", (unsigned long)
	sizeof(c));
printf("Size of long long int: %i byte(s)\n", (unsigned long)
	sizeof(d));
printf("Size of float: %i byte(s)\n", (unsigned long)
	sizeof(e));
return (0);
}
