#include "main.h"

/**
 *main - demonstrates how to access members of a structure
 *Return: Always 0(successful)
 */

int main(void)
{
	struct cube p1, p2;

	strcpy(p1.p_name, "XYZ");

	p1.p_age = 25;

	p1.p_gender = 'M';

	strcpy(p2.p_name, "ABC");

	p2.p_age = 50;

	p2.p_gender = 'F';

	/* print the patients records */
	/*patient 1 */
	printf("The name of the first patient is:%s\n", p1.p_name);
	printf("The age of the first patient is:%d\n", p1.p_age);
	if (p1.p_gender == 'M')
	{
		printf("The gender of the first patient is: Male\n");
	}
	else
	{
		printf("The gender of the first patient is: Female\n");
	}
	printf("\n");

	/* patient 2 */
	printf("The name of the second patient is:%s\n", p2.p_name);
	printf("The age of the second patient is:%d\n", p2.p_age);
	if (p2.p_age == 'M')
	{
		printf("The gender of the second patient is: Male\n");
	}
	else
	{
		printf("The gender of the second patient is: Female\n");
	}
	
	return (0);
}
