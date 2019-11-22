#include "stdafx.h"
#include<stdio.h>
#include<string>
int lianjie(char a[],char b[]);
int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	lianjie(a,b);
	return 0;
}
int lianjie(char a[],char b[])
{
	puts(strcat(a,b));
	return 0;
}
