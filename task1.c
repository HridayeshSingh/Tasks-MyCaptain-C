#include<stdio.h>
main()
{
	char name[20];
	int age=0;
	long long int phone=0;
	printf("Enter you name : ");
	scanf("%s",&name);
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your phone number : ");
	scanf("%lld",&phone);
	printf("--------------------------------\n");
	printf("Your name is : %s\nYour age is : %d\nYour phone number is : %lld",name,age,phone);
}
