#include<stdio.h>
int main( )
{
	int n,r,i=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
	
	if(r==0)
	{
		i=1;
		printf("duck number");
		break;
	}
	else
	{
		printf("nd");
		break;
	}
}
}
