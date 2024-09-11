//2. Accepting 5 numbers from the user and displaying them
#include<stdio.h>
main()
{
	int num[5], i;

	for(i=1;i<=5;i++)
	{
		printf("enter thye numnr :");
		scanf("%d",&num[i]);
	}
		for(i=1;i<=5;i++)
		{
				printf("number are :%d",num[i]);
		}

}

