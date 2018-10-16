#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, r;

	while (1)
	{
		printf("Enter a number of the side1(-1 to end) : ");
		scanf_s("%d", &x);
		if (x == -1)
			break;
		printf("Enter a number of the side2 : ");
		scanf_s("%d", &y);
		printf("Enter a number of the hypotenuse(r <= 500) : ");
		scanf_s("%d", &r);
		x = x * x + y * y;
		y = r * r;
		if (r > 500)
			printf("The hypotenuse can't larger than 500.\n");
		else if (x == y)
			printf("This is a right triangle.\n");
		else
			printf("This is not a right triangle.\n");
		printf("\n");
	}
	system("pause");
}