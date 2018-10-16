#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j < 5 - i; j++)
			printf("%s", " ");
		for (j = 0; j < i * 2 - 1; j++)
			printf("%s", "*");
		printf("\n");
	}
	for (i = 4; i >= 1; i--)
	{
		for (j = 0; j < 5 - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 - 1; j++)
			printf("*");
		printf("\n");
	}
	system("pause");
}