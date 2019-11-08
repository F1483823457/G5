#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,a,b,c,d,h=10;
	scanf("%d %d",&x,&y);
	a=pow((2-x),2)+pow((2-y),2);
	b=pow((2+x),2)+pow((2-y),2);
	c=pow((2+x),2)+pow((2+y),2);
	d=pow((2-x),2)+pow((2+y),2);
	if(a>1 && b>1 && c>1 && d>1)
		h=0;
	printf("(%d,%d)点的高度是%dm\n",x,y,h);
	return 0;
}
