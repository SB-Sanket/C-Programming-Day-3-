#include<stdio.h>   //Program to count no of digits in a number.
int main()
{
	int n,r,c=0;
	printf("Enter any number");
	scanf("%d",&n);
	while(n!=0)
	{
	r=n%10;
	c=c+1;
	n=n/10;
	}
	printf("The number of digits =%d",c);
	return 0;
}