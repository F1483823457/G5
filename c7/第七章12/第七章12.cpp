#include "stdafx.h"
#include <stdio.h>
#include <math.h>
double diedai(double x);
int main()
{	
	double x;
	printf("请输入x\n");
	scanf("%lf", &x);
	printf("方程在%lf附近的实根为: %lf\n",x,diedai(x));
	return 0;
}
double diedai(double x)
{
	double r[100];
	int i=0;
	r[0] = x;
	do{
	r[i+1]=r[i]-(pow(r[i],3)+2*pow(r[i],2)+3*r[i]+4)/(3*pow(r[i],2)+4*r[i]+3);
	i++;
	}while(fabs(r[i]-r[i-1])>=1e-6);
return r[i];
}
