#include "stdafx.h"
#include<stdio.h>
#include<string.h>
char tongji(char a[],int b[]);
int main()
{
	char a[100];
	int i;
	static int b[4];
	gets(a);
	tongji(a,b);
	for(i=0;i<4;i++)
		printf("%d ",b[i]);
	printf("\n");
	return 0;
}
char tongji(char a[100],int b[4])
{
	int j;
	for (j=0;a[j]!='\0';j++) 
    {
    if(a[j]>=65&&a[j]<=90||a[j]>=97&&a[j]<=122) b[0]++;
       else if(a[j]>=48&&a[j]<=57) b[1]++; 
          else if(a[j]==32) b[2]++;
             else b[3]++;
    }
	return 0;
}
