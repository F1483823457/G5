#include<stdio.h>
#include<math.h>
#define d b*b-4*a*c
double x1,x2;
void da(double a,double b,double c)
{
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("����ʽ�ĸ�x1=%.2lf x2=%.2lf\n",x1,x2);
}
void deng(double a,double b,double c)
{
    x1=(-b)/(2*a);
    printf("����ʽ�ĸ�x=%.2lf\n",x1);
}
main()
{
    double a,b,c;
    printf("������a,b,c��ֵ\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(d>0) da(a,b,c);
    else if(d==0) deng(a,b,c);
    else printf("����ʽû��ʵ��\n");
}
