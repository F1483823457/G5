#include "stdafx.h"
#include<stdio.h>
int main()
{
	int a[5]={2,4,5,7,9};
    int b,i;
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(b<a[i]) 
        {
		int t;
        t=a[i];
        a[i]=b;
        b=t; 
        }
        printf("%d ",a[i]);

    }
        printf("%d\n",b);
	return 0;
}
