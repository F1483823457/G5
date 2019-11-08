#include "stdafx.h"
#include<stdio.h>

int main(int argc, char* argv[])
{
	char a;
	int b,c,d,e;
	b=c=d=e=0;
	while((a=getchar())!='\n')
		{
	      if(a>=65&&a<=90||a>=97&&a<=122) 
			  b++;
	      else if(a==32)
			  c++;
	      else if(a>=48&&a<=57)
			  d++;
	      else e++;
	}
	printf("字母%d个\n",b);
	printf("空格%d个\n",c);
	printf("数字%d个\n",d);
	printf("其他字符%d个\n",e);
	
	return 0;
}
