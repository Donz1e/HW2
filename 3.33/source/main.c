#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a = ' ';
	char b = '+';
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if ((i == 1) && (j > 0) && (j < 11))
				printf("%c", a);
			else
				printf("%c", b);
		}
		printf("\n");
	}
	system("pause");
}