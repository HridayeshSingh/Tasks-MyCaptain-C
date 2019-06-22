#include<stdio.h>
main()
{
	float c = 0.0, f = 0.0;
	printf("Enter temperature in CELCIUS : ");
	scanf("%f",&c);
	f = 9*c/5.0+32;
	printf("\nThe given temperature in FAHRENHEIT is : %.2f",f);
}
