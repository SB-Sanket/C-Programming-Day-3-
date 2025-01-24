#include<stdio.h>  //Program to find out Factorial.
int main()
{
	int n,f=1,i;
	printf("Enter the number of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	f=f*i;
	}
	printf("The factorial is=%d",f);
	return 0;
}