#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a;
	for (;;)
	{
		printf("Enter sales in dollars (-1 to end) : ");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		a = a * 0.09 + 200;
		printf("Salary is : %.2f\n", a);
		printf("\n");
	}
	system("pause");
}