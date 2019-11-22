#include <stdio.h>
#include <string.h>
char copy(char x[], char y[]);           
main()
{
    char a[20], b[20];
    gets(a);                             
    b[20]=copy(a, b);                    
    puts(b);                              
    return 0;
}
char copy(char x[], char y[])
{
    int m, i, j;
    m=strlen(x);
    for (i=0, j=0; i<m; i++){
        if (x[i]=='a'||x[i]=='A'||x[i]=='e'||x[i]=='E'\
            ||x[i]=='i'||x[i]=='I'||x[i]=='o'||x[i]=='O'\
			||x[i]=='u'||x[i]=='U')
            y[j++]=x[i];
    }
    y[j] = '\0';
    return y[j];
}
