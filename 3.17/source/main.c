#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b, c, d, e, f;
	while (1)
	{
		printf("Enter account number (-1 to end) : ");
		scanf_s("%d", &a);
		if (a == -1)
			break;
		printf("Enter beginning balance : ");
		scanf_s("%f", &b);
		printf("Enter total charges : ");
		scanf_s("%f", &c);
		printf("Enter total credits : ");
		scanf_s("%f", &d);
		printf("Enter credit limit : ");
		scanf_s("%f", &e);
		f = b + c - d;
		if (f > e)
		{
			printf("Account : %d\n",a);
			printf("Credit limit : %.2f\n", e);
			printf("Balance : %.2f\n", f);
			printf("Credit Limit Exceeded\n");
		}
		printf("\n");
	}
	system("pause");
}