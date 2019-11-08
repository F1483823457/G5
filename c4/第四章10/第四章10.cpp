#include "stdafx.h"
#include<stdio.h>
int main(int argc, char* argv[])
{
	int c;
	double a;
	double b,b1,b2,b3,b4,b5;
	scanf("%lf",&a);
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b3=b2+200000*0.05;
	b4=b3+200000*0.03;
	b5=b4+400000*0.015;
	c=a/100000;
	if(c>10) c=10;
	switch(c)
	{
	case 0:b=a*0.1;break;
	case 1:b=b1+(a-100000)*0.075;break;
	case 2:
	case 3:b=b2+(a-200000)*0.05;break;
	case 4:
	case 5:b=b3+(a-400000)*0.03;break;
	case 6:
	case 7:
	case 8:
	case 9:b=b4+(a-600000)*0.015;break;
	case 10:b=b5+(a-1000000)*0.01;break;
	}
	printf("%.2lf",b);
	return 0;
}
