#include<stdio.h>
#include<string.h>
main()
{
	char str[20],temp[20];
	int i,j;
	printf("Enter the string to be checked for palindrome:\n");
	gets(str);
	j = strlen(str)-1;
	for(i=0;i<strlen(str);i++)
	{
		temp[j--] = str[i];	
    }   
	if(strcmp(str,temp)==0)
	    printf("%s is PALINDROME\n",str);
	else
		printf("%s is NOT PALINDROME\n",str);	
}
