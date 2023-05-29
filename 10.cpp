/* write a program to print table of a number given by the user*/

#include<stdio.h>
int main ()
{
	
	int i,n ;
	printf("Enter a number");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n",n,i,i*n);
	}
	
	
	
	return 0;
	
	
}
