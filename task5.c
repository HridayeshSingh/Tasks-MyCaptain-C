#include<stdio.h>
main()
{
	long n=0,rev=0;
	printf("Enter a number : ");
	scanf("%li",&n);
	while(n>0)
	{
		rev = rev*10 + n%10;
		n/=10;
	}
	printf("\nReverse of the entered number is : %li",rev);
}
