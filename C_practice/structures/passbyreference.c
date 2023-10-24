#include "main.h"

/**
 *passbyReference - accepts a structure variable as argument
 *@p: pointer variable to the structure elements
 */
void passbyReference(struct patient *p)
{
	p->id = 102;

	printf("The patient's id is:%d\n", p->id);
	printf("The patient's name is:%s\n", p->name);
	printf("The patient's gender is:%d\n", p->gender);
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

	passbyReference(&p1); /*pass structure variable by reference */
       /*p1's id gets affected by the function's modification */
	{
		printf("The original value of id is:%d\n", p1.id);
	}
return (0);
}

