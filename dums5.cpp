#include<stdio.h>
int main( )
{
	int i=1,n,product=1;
	scanf("%d",&n);
	while( i<=n)
	{
		product*=i;
		i++;
	}
	printf("%d",product);
}
