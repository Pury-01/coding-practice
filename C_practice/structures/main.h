#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

/**
 *struct cube - structure of patients details
 *@p_name: name of the patient
 *@p_age: age of the patient
 *@p_gender: gender of the patient
 */

struct cube
{
	char p_name[10];
	int p_age;
	char p_gender;
};

#endif /*MAIN_H */
