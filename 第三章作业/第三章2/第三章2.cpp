#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main()
{double r5,r3,r2,r1,r0,p,p1,p2,p3,p4,p5;
 p=1000;
 r1=0.015;
 r2=0.021;
 r3=0.0275;
 r5=0.03;
 r0=0.0035;
 p1=p*(1+r5*5);           
 p2=p*(1+2*r2)*(1+3*r3);     
 p3=p*(1+3*r3)*(1+2*r2);    
 p4=p*pow(1+r1,5);           
 p5=p*pow(1+r0/4,4*5);      
 printf("p1=%.2lf\n",p1);       
 printf("p2=%.2lf\n",p2);       
 printf("p3=%.2lf\n",p3);       
 printf("p4=%.2lf\n",p4);       
 printf("p5=%.2lf\n",p5);       
 return 0;
}