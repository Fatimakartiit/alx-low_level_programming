#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * imprime une phrase avant main
 * function  exe
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
