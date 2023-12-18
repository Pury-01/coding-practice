#include <stdio.h>

/**
 *main - prints Celsius-Farenheit program
 *
 *Return: Always 0(success)
 */

int main(void)
{
	float fahr, celsius;
	float upper, lower, step;

	upper = 300; /* upper limit of temperature scale */
	lower = 0;  /* lower limit */
	step = 20; /* step size */

	celsius = lower;

	printf("Celsius-Farenheit table\n");

	while (celsius <= upper)
	{
		fahr = (9.0 / 5.0) * (celsius + 32.0);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return (0);
}

