#include "stdafx.h"
#include<stdio.h>
int main()
{
	int n[3][3],i,j,s=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&n[i][j]);
	s=n[0][0]+n[0][2]+n[1][1]+n[2][0]+n[2][2];
	printf("%d\n",s);
	return 0;
}
