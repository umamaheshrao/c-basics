#include<stdio.h>
int main()
{
	int a,i=1;
	scanf("%d",&a);
	while(a>=i)
	{
		if(a%i==0)
		i++;
	}
	printf("%d",i);
}
