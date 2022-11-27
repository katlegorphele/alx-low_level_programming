#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h> 

/**
  * main - test file
  * @argc: argument counter
  * @argv: argument vector
  *
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*operation)(int, int);

	/* checks argument count*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}  

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	} 

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operation = get_op_func(argv[2]);


	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	} 

/*	a = atoi(argv[1]);
	b = atoi(argv[3]); */
	c = (*operation)(a, b);

	printf("%d\n",c);
	return (0);
}
