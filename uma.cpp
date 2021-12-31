#include<stdio.h>
int main( )
{
	int cp,sp,l,p;
	float perc;
	printf("enter values of cp,sp");
	scanf("%d%d",&cp,&sp);
	scanf("%f",&perc);
	if(cp>sp)
	{
		l=cp-sp;
		perc=l*100/cp;
		printf("%.2f",perc);
	}
	else if (sp>cp)
	{
		printf("loss");
		p=sp-cp;
		perc=p*100/cp;
	}
	else 
	{
		printf("no profit no loss");
	}
}
