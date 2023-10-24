#include "main.h"

/**
 *passbyvalue - accepts a structure variable as argument
 *@p: structure variable
 */

void passbyvalue(struct patient p)
{
	p.id = 102;

	printf("The patient's id is: %d\n", p.id);
	printf("The patient's name is: %s\n", p.name);
	printf("The patient's gender is %c\n", p.gender);
}
/**
 *main - prints the patients details
 *Return: Always 0(successful)
 */

int main(void)
{
	struct patient p1;

	p1.id = 101;

	strcpy(p1.name, "ABC");
	p1.gender = 'M';

	passbyvalue(p1);
	{
		printf("the original value of ID is:%d\n", p1.id);
	}
	return (0);
}
