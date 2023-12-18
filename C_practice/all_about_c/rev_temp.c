#include <stdio.h>

/**
 *main - prints farenheit-celsius table in reverse order
 *
 *Return: Always 0(success)
 */

int main(void)
{
	float fahr = 300.0;

	printf("Farenheit-Celcius table\n");

	for (fahr = 300.0; fahr >= 0.0; fahr = fahr - 20.0)
	{
		printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
	return (0);
}
