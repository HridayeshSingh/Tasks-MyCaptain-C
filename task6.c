#include<stdio.h>
#include<math.h>
main()
{
	int n=0,count=0,temp=0,r=0,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	temp = n;
	while(temp>0)
	{
		count++;
		temp/=10;
	}
	temp = n;
	while(temp>0)
	{
		r=temp%10;
		sum+=pow(r,count);
		temp/=10;
	}
	if(sum==n)
	printf("\n%d is an ARMSTRONG number",n);
	else
	printf("\n%d is NOT an ARMSTRONG number",n);
}

