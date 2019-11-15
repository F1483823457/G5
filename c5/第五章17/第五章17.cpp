#include "stdafx.h"
#include<stdio.h>
main()
{
	char a,b,c;
	for(a='X';a<='Z';a++)
       for(b='X';b<='Z';b++)
       if(a!=b)
    for(c='X';c<='Z';c++)
	   if(a!=c&&b!=c)
	   if(a!='X'&&c!='X'&&c!='Z')
       printf("A-->%c\nB-->%c\nC-->%c\n",a,b,c);
	return 0;
}
