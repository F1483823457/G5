#include "stdafx.h"
#include<stdio.h>
int change(int a[3][3]);
int main()
{
	int i,j,a[3][3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%2d ",a[i][j]);
			printf("\n");
	}
	printf("\n");
	change(a);
	return 0;
}
int change(int a[3][3])
{
	int i,j,b[3][3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			b[i][j]=a[j][i];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%2d ",b[i][j]);
		printf("\n");
	}
	return 0;
}