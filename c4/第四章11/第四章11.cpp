#include "stdafx.h"
#include<stdio.h>
int main()
{
	int n[3],i,j;
	for(i=0;i<4;i++)
		scanf("%d",&n[i]);
	for(i=0;i<3;i++)
		for(j=i+1;j<4;j++)
			if(n[i]>n[j])
			{int t=0;
			t=n[i];
			n[i]=n[j];
			n[j]=t;
			}
	for(i=0;i<4;i++)
	printf("%d ",n[i]);
	printf("%d");
	return 0;
}
