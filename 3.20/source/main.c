#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end) : ");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		printf("Enter hourly rate od the worker ($00.00) : ");
		scanf_s("%f", &b);
		if (a > 40)
			a = (a - 40)*b*1.5 + b * 40;
		else
			a = a * b;
		printf("Salary $%.2f\n", a);
		printf("\n");
	}
	system("pause");
}