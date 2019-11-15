#include "stdafx.h"
#include<stdio.h>
int main()
{
	int sum=0,i,j;
	for(i=6;i<=1000;i+=2)
	{
	    sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			sum+=j;
		}
		if(sum==i)
		{printf("%3d its factors are ",i);
		for(j=1;j<i;j++)
		{
		if(i%j==0)
		printf("%d,",j);
		}
		printf("\n");
		}
	}
	return 0;
} 
