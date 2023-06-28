#include <stdio.h>
/**
 * main - Entry point*
 * Return: Always 0
 *\
 int main(void)
 {
 	char a;
	int b;
	long int c;
	long long int d;
	floatf;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
