#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	double b;
	printf("请输入一个小于1000的正数\n");
	scanf("%d",&a);
	if( a > 0 && a < 1000 )
	{
		b = sqrt(a);
		printf("它的平方根是：%2.0f\n",b);
	}
	else
		printf("输入的数据不在范围，请重新输入\n");
		
	return 0;
}