#include "stdafx.h"
#include<stdio.h>
int main()
{   int y,d,n,sum;
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("����������\n");
    printf("������������ �� ��:(�����ÿո����)\n");
    while (scanf("%d %d %d",&y,&n,&d)!=EOF)
    {
	if ((y%4==0&&y%100!=0)||y%400==0)
    {m[1]=29;
    printf("%d��������\n",y);}
    sum=0;
    for(int i=0;i<n-1;i++)
    sum+=m[i];
    sum+=d;
    printf("%d-%d-%d����һ���%d��\n",y,n,d,sum);
    printf("�������ٽ��У�����ctrl+z�ɽ���ѭ��\n\n");
    }
    return 0;
}