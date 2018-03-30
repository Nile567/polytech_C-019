#include <stdio.h>

int main(void)
{
	float x, y;
	char operator;

	scanf("%f %c", &y, &operator);
	if (operator == 'S')
	{
		printf("= %.1f\n", y);
		while (operator != 'E')
		{
			scanf("%f %c", &x, &operator);
			switch (operator)
			{
			case '+':
				printf("= %.1f\n", y += x);
				break;
			case '-':
				printf("= %.1f\n", y -= x);
				break;
			case '*':
				printf("= %.1f\n", y *= x);
				break;
			case '/':
				if (x == 0)
					printf("Ошибка\n");
				else
					printf("= %.1f\n", y /= x);
				break;
			default:
				if (operator != 'E' && operator != 'S')
					printf("ошибка оператора\n");
			}
		}
	}
	else if (operator != 'S' && operator !='E')
	{
		printf("дать значение аккумулятору\n");
	}

	return 0;
}