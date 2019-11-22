#include "stdafx.h"
#include<stdio.h>
int main()
{

int c1,c2,c3,c4,c5;
c1=getchar();
c2=getchar();
c3=getchar();
c4=getchar();
c5=getchar();
c1 += 4;
c2 += 4;
c3 += 4;
c4 += 4;
c5 += 4;
printf("printf输出为%c%c%c%c%c\n", c1,c2,c3,c4,c5);
printf("putchar输出为");
putchar(c1);
putchar(c2);
putchar(c3);
putchar(c4);
putchar(c5);
printf("\n");
return 0;
}
