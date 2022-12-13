/**
 * Given two statements, x = 3; and y = 5 + x;, how can you build a 
 * statement block with the two statements?
 */

#include <stdio.h>
/**
 * main - build a statement block
 *
 * Return: 0
 */
main()
{
	int x;
	int y;

	x = 3;
	y = 5 + x;
	printf(" y = %d. \n");
	return (0);
}

/**
 * Enclosing the statment within a block of
 * code "{ }"
 */
