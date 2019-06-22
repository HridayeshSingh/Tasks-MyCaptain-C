#include<stdio.h>
main()
{
	int ar[10],i;
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
		scanf("%d",&ar[i]);
	int min=ar[0],max=0;
	for(i=0;i<10;i++)
	{
		if(ar[i]>max)
			max=ar[i];
		if(ar[i]<min)
			min=ar[i];
	}
	printf("\nSmallest Element = %d\nLargest Element = %d",min,max);
}
