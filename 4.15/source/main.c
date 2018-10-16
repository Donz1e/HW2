#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a;
	int b, i;

	printf("Enter your invesment : ");
	scanf_s("%f", &a);
	printf("Enter a number of years you want to invest : ");
	scanf_s("%d", &b);
	for (i = 1; i <= b; i++)
	{
		a = a + a * 0.095 + a * 0.005*i;
		printf("Your interest rate in Year %d\tis : $%.2f\n", i, a);
	}
	system("pause");
}