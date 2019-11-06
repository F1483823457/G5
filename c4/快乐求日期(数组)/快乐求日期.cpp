#include "stdafx.h"
#include<stdio.h>
int main()
{   int y,d,n,sum;
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("快乐求日期\n");
    printf("请依次输入年 月 日:(数据用空格隔开)\n");
    while (scanf("%d %d %d",&y,&n,&d)!=EOF)
    {
	if ((y%4==0&&y%100!=0)||y%400==0)
    {m[1]=29;
    printf("%d年是闰年\n",y);}
    sum=0;
    for(int i=0;i<n-1;i++)
    sum+=m[i];
    sum+=d;
    printf("%d-%d-%d是这一年第%d天\n",y,n,d,sum);
    printf("如若不再进行，输入ctrl+z可结束循环\n\n");
    }
    return 0;
}