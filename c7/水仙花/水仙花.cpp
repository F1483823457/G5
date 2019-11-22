#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    int n[10][10],i,j,h=0;
	long t1,t2;
        for(i=1;i<=9;i++)
            for(j=3;j<=9;j++)
            n[i][j]=pow(i,j);
			t1=clock();
    for(i=100;i<100000000;i++)
    {
        int sum=0,a,b,c=0;
        a=b=i;
        for(j=3;a>999;j++)
            a/=10;
        for(;b>0;)
        {
            c=b%10;
            b/=10;
            if(c==0) continue;
            sum+=n[c][j];
        }
        if(sum==i)
        {
            h++;
            printf("%-9d ",i);
            if(h%5==0) printf("\n");
        }
		t2=clock();		
    }
    printf("\n”√ ±%.2fs\n",(t2-t1)/(float)CLOCKS_PER_SEC);
	return 0;
}