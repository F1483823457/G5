#include "stdafx.h"
#include<stdio.h>

int main(int argc, char* argv[])
{
	int a,b,x,y;
	int c,d,i=0;
	scanf("%d %d",&a,&b);
	x=a;
	y=b;
	while(b!=0)
	{i=a%b;
	a=b;
	b=i;
	}
	c=a;
	d=x*y/a;
	printf("��С��������%d\n",d);
	printf("���Լ����%d\n",c);
	return 0;
}
