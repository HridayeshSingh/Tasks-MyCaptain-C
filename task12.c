#include<stdio.h>
#include<stdlib.h>
main()
{
	int choice=0;
	float c=0,f=0;
	printf("Pick an option:\n1. CELCIUS TO FAHRENHEIT\n2. FAHRENHEIT TO CELCIUS\n3. EXIT\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter temperature in celcius: \n");
			scanf("%f",&c);
			f = c*9/5.0+32;
			printf("Temperature in fahrenheit: %.2f",f);
			break;
		case 2:
			printf("Enter temperature in fahrenheit: \n");
			scanf("%f",&f);
			c = (f-32)*5/9.0;
			printf("Temperature in celcius: %.2f",c);
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("INVALID CHOICE!! Enter a valid option..");
	}
}
