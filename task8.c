#include<stdio.h>
main()
{
	int n=0,i=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("\nMultiplication Table of %d is : ",n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
}

