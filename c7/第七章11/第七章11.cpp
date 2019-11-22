#include "stdafx.h"
#include<stdio.h>
int qipao(char a[]);
int main()
{
	int h;
	char a[10];
	gets(a);
	qipao(a);
	return 0;
}
int qipao(char a[])
{
	int i,j;
	for(i=0;i<9;i++)
		for(j=i+1;j<=9;j++)
			if(a[i]>a[j])
			{
			char t;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
	puts(a);
	return 0;
}
