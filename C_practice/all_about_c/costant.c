#include <stdio.h>

/**
 *main - shows use of symbolic constants
 *
 *Return: 0(success)
 */

#define LOWER 0 /* lower limit of temperature scale */
#define UPPER 300 /* upper limit */
#define STEP 20 /*step size */

int main(void)
{
	int fahr;

	printf("Farenheit-Celsius Table\n");
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	return (0);
}
