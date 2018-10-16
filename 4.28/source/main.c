#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b;

	for (;;)
	{
		printf("Enter pay code (1 to managers) (2 to hourly workers) (3 to commission workers) (4 to pieceworkers) (-1 to end) : ");
		scanf_s("%f", &a);
		printf("\n");
		if (a == -1)
			break;
		else if (a == 1)
		{
			printf("Managers Weekly Pay\n");
			printf("Enter weekly salary : ");
			scanf_s("%f", &a);
			printf("Managers weekly salary is : $%.0f", a);
		}
		else if (a == 2)
		{
			printf("Hourly Workers Weekly Pay\n");
			printf("Enter hourly salary : ");
			scanf_s("%f", &a);
			printf("Enter # of hours worked : ");
			scanf_s("%f", &b);
			if (b > 40)
				a = (b - 40)*a*1.5 + a * 40;
			else
				a = a * b;
			printf("Hourly workers weekly salary is : $%.2f", a);
		}
		else if (a == 3)
		{
			printf("Commission Workers Weekly Pay\n");
			printf("Enter gross weekly sales : ");
			scanf_s("%f", &a);
			a = 250 + a * 0.057;
			printf("Commission workers weekly salary is : $%.2f", a);
		}
		else if (a == 4)
		{
			printf("Pieceorkers Weekly Pay\n");
			printf("Enter salary for each of the items : ");
			scanf_s("%f", &a);
			printf("Enter gross weekly items : ");
			scanf_s("%f", &b);
			a = a * b;
			printf("Pieceworkers weekly salary is : $%.0f", a);
		}
		else
			printf("Wrong pay code");
		printf("\n\n");
	}
	system("pause");
}