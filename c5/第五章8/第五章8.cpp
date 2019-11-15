#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        int a,b,c,d=0;
        for(i=m;i<=n;i++)
        {
            a=i/100;
            b=i/10%10;
            c=i%10;
            if(pow(a,3)+pow(b,3)+pow(c,3)==i)
            {
                if(d!=0) printf(" ");
                printf("%d",i);
                d++;
            }

        }if(d==0) printf("no");
            printf("\n");
    }
    return 0;
}