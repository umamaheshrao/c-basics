#include<stdio.h>
int main( )
{
	int a,b,multification=0;
	scanf("%d",&b);
	for(a=1;b>=a;b--)
	{
		multification*=a;
	}
	printf("%d",multification);
}
