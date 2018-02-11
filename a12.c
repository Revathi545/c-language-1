#include<stdio.h>
main()
{
	int d,y,w;
	a:printf("enter the no.of days");
	scanf("%d",&d);
	if(d>=0 || d<=1460 || d>=1826)
	{
		if(d>=0)
	{
	y=d/365;
	w=d/7;
	d=d%7;
	//sec=sec%60;
	printf("YEAR=%d WEEKS=%d DAYS=%d",y,w,d);
	}
	}
	else
	{
		printf("enter a valid time\n");
		goto a;
	}
}
