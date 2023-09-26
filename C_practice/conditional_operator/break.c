#include <stdio.h>

/**
 *main - program to illustrate usage of break statement
 *Return: Always 0(successful)
 */

void findelement(int arr [], int size, int key)
{
	int i = 0;

	/* loop to traverse array and search for key */
	for (i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			printf("Element found at position: %d\n", (i + 1));
			break;
		}
	}
}

int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	/*number of elements */
	int n = 6;

	/* key to be searched */
	int key = 3;

	/*calling function to find the key */
	findelement(arr, n, key);

	return (0);
}


