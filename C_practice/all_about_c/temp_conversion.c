#include <stdio.h>

/**
 *main - prints Farenheit-Celcius table
 *
 *Return: Always 0(success)
 */

int main(void)
{
	float fahr, celcius;
	float lower, upper, step;

	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /*step size */

	fahr = lower;

	printf("Farenheit-Celcius table\n");

	while (fahr <= upper)
	{
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
	return (0);
}
