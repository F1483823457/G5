// �Ż�2.cpp : Defines the entry point for the console application.
//78498 0.0070��
#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<time.h>
#define N 1000000
bool prime[N];
int main()
{
 int i,j,k=1;//Ĭ��2�������жϣ��Ѿ�������
 long t1,t2;
 t1=clock();
 for(i=3;i<=N;i++)
  if(i%2==0) prime[i]=false;
  else prime[i]=true;
 for(i=3;i<=sqrt(N);i=i+2)
  {
   if(prime[i])
      for(j=i+i; j<=N; j+=i) prime[j]=false;
  }
 for(i=3; i<=N; i++)
   {
    if(prime[i]) k++;
   }
    t2=clock();
    printf("%d\n",k);
    printf("Time used: %10.4f seconds\n",(t2-t1)/(float)CLOCKS_PER_SEC);
 return 0;
}
