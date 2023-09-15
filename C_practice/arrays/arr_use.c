#include <stdio.h>

/**
 *main - program demonstares use of arrays in C
 *Return: Always 0(sucess)
 */

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};

	/*modify element at index 2*/
	arr[2] = 100;
	printf("elements in array: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n ", arr[i]);
	}
	return (0);
}
