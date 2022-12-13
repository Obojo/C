/** Write a C program that calls the C function you just wrote in 
 * Exercise 4 to calculate the multipication of 3 times 5 and 
 * then print out the return value from the function on the screen.
 */

#include <stdio.h>
/* Multiply two integers and return result */
int int_mul(int a, int b)
{
	int result;

	result = a*b;
	return result;
}

/**
 * main - call int_mul funtion
 *
 * Return: 0
 */
int main()
{
	int mult;

	mult = int_mul(3,5);
	printf("3 multiply by 5 is %d.\n", mult);
	return (0);
}
