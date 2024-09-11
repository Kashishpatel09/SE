//3. Analyzing 10 numbers for evenness, oddness, and sums
#include<stdio.h>
main()
{
	int num,i=1,evencount=0,oddcount=0,evsum=0,oddsum=0;
	while(i<=5){
		printf("numbers:");
		scanf("%d",&num);

	if(num%2==0)
	{
		printf("even");
		evencount++;
		evsum=evsum+num;
		
	}
	else
	{
		printf("odd");
		oddcount++;
		oddsum=oddsum+num;
	}
	i++;

}
	printf("even:%d",evencount);
	printf("odd:%d",oddcount);
	printf("even sum:%d",evsum);
	printf("odd sum:%d",oddsum);
}

