#include<stdio.h>
main()
{
	int m1=0,m2=0,m3=0,sum=0;
	float avg=0.0;
	printf("Enter the marks in 3 subjects :\n");
	scanf("%d%d%d",&m1,&m2,&m3);
	sum = m1+m2+m3;
	avg = sum/3.0;
	printf("\nSum of the marks in 3 subjects is : %d\nAnd their average is : %.2f",sum,avg);
}
