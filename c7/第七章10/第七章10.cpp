#include "stdafx.h"
#include<stdio.h>
#include<string.h>
int max(char a[]);
int main()
{
	char a[100];
	gets(a);
	max(a);
	return 0;
}
int max(char a[100])
{
	int q,j,x,z,c;
	int q_z,j_z;
	q=0,j=0,c=0;
	for (x=0;x<strlen(a);x++) 
	{
		z=0;
		q_z=x;
		while(a[x]!=' '&&a[x]!='\0') 
		{
			z++;
			x++;
		}
		j_z=x-1;
		if(z>c)
		{
			c=z;
			q=q_z;
			j=j_z;
		}
	}
	printf("最长的单词为 ");
	for (x=q;x<=j;x++)
	putchar(a[x]);
	printf("\n");
	return 0;
}
