#include "stdafx.h"
#include<stdio.h>
#include<string.h>
int change(char s[100]);
int main()
{
	char a[100];
	gets(a);
	change(a);
	puts(a);
	return 0;
}
int change(char s[100])
{
	int i,j,l;
	char t[100];
	strcpy(t,s);
	l=strlen(s);
	for(i=0,j=l-1;j>=0;i++,j--)
		s[i]=t[j];
	return s[100];
}
