#include<stdio.h>
int main()
{
	int n,p,s=0,r;
	printf("Enter the number");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
	r=n%10;
	s=(s*10)+r;
	n=n/10;
    }
	printf("%d",s);
	if(s==p)
	{
	printf("\nThe number is Palindrome");
	}
	else
	{
	printf("\nThe number is not Palindrome");
	}
}