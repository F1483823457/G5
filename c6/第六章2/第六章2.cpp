#include "stdafx.h"
#include<stdio.h>
int main()
{
	int n[10],i,j;
	for(i=0;i<10;i++)
		scanf("%d",&n[i]);
	for(i=0;i<9;i++)
		for(j=1+i;j<10;j++)
			if(n[i]>n[j])
			{int t;
			t=n[i];
			n[i]=n[j];
			n[j]=t;
			}
	for(i=0;i<10;i++)
		printf("%d ",n[i]);
	printf("\n");
	return 0;
}
