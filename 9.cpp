#include<stdio.h>
int main()
{
	int i , n;
	
	printf("ente the number:");
	scanf("%d",&n);
	
	
	for( i=1;i<=n;i++)
	{
		printf(" number is : %d and cube of the %d is :%d\n",i,i,(i*i*i));
	}
	return 0;
}
