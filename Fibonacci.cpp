//IMPORTANT//
//WAP to print fibonacci series upto n terms.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter Number of Terms hello world");
	scanf("%d",&n);
	for(i=1;i=n;i++)
	{
		c=a+b;
		printf("%d\n",a);
		a=b;
		b=c;
	}
	return(0);
}
