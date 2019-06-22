#include<stdio.h>
main()
{
	int num=0,fact=1,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		fact*=i;
	printf("The factorial of %d is %d",num,fact);
}
