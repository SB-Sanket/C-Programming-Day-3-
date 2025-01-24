#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter any number");
	scanf("%d",&n);
	for(i=1;i<=9;i++)
	{
	if(n%i==0)
	c=c+1;
	}
	if(c==2)
	printf("Prime number");
	else
	printf("Not Prime number");
	return 0;
}