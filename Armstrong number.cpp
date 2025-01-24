#include<stdio.h>   //Program to check Armstrong number.
#include<math.h>  
int main()
{
	int n,s=0,r,no,c=0,p,k;
	printf("Enter any number");
	scanf("%d",&n);
	no=n;
	p=n;
	while(n!=0)
	{
	r=n%10;
	c=c+1;
	n=n/10;
	}
	while(no!=0)
	{
	k=no%10;
	s=s+(pow(k,c));
	no=no/10;	
	}
	if(s==p)
	printf("Armstrong number");
	else
	printf("Not Armstrong number");
	return 0;
}