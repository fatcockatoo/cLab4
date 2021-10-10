#include <stdio.h>
#include <math.h>

void task1();
void task5();
int main()
{
	int number;
	while (1)
	{
		scanf_s("%d", &number);
		switch (number)
		{
		case 1:
		{
			system("cls");
			task1();
			printf("\n");
			system("pause");
			break;
		}
		case 5:
		{
			system("cls");
			task5();
			printf("\n");
			system("pause");
			break;
		}
		}
	}
}