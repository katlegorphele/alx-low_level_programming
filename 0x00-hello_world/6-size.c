#include <stdio.h>
/** 
  * main - show size of different data types
  *
  * Return: void
*/
int main(void)
{
	int iType
	long int liType
	long long int llType
	char cType
	float fType

	printf("Size of a char: %zu byte(s)", sizeof(cType));
	printf("Size of an int: %zu byte(s)", sizeof(iType));
	printf("Size of a long int: %zu byte(s)", sizeof(liType));
	printf("Size of a long long int: %zu byte(s)", sizeof(llType));
	printf("Size of a float: %zu byte(s)", sizeof(fType));
	return (0);
}
