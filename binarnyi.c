#include <stdio.h>
int main(void)
{
	int array[10] = { 2, 4, 6, 8, 10, 12, 16, 18, 20, 22, 22, 24 };
	int shV = 6;
	int mid;
	int size = sizeof(array) / 6;
	int low = 0;
	int high = size;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (shV == array[midle])
		{
			printf("Номер элемента, который ты искал: %i\n", mid + 1);
			break;

		}
		else if (shV > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;

		}

	}
	return 0;
}
