#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int main()
{
	int n[100],i,j,f=1,g;
	n[0]=2;
	for(i=3;i<=100;i+=2)
	{
	g=1;	
	for(j=3;j<=sqrt(i);j+=2)
	if(i%j==0) {g=0;break;}
	if(g==1)	n[f++]=i;
	}
	for(i=0;i<f;i++)
	{	if(i>0 && i%5==0) printf("\n");
		printf("%2d ",n[i]);}
	printf("\n");
	return 0;
}
