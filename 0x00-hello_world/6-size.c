#include <stdio.h>

/**
  * main - calculate size of data types
  *
  *Return: Void
*/

int main(void)
{
	int iType;
	long int liType;
	long long int llType;
	char cType;
	float fType;

	printf("Size of a char: %zu byte(s)\n", sizeof(cType));
	printf("Size of an int: %zu byte(s)\n", sizeof(iType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(liType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llType));
	printf("Size of a float: %zu byte(s)\n", sizeof(fType));
	return (0);
}
