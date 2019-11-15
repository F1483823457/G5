#include "stdafx.h"
#include<stdio.h>
int main()
{
    int n,s=1,sum=0;
    for(n=1;n<=20;n++)
{
    s=s*n;
    sum=sum+s;
}
    printf("%d\n",sum);
    return 0;
}
