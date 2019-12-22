#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
void menu();
void write2file( struct student s[], int count );
void readfromfile( struct student s[], int count );
void student_input( struct student *s );
void student_output(struct student *s);
void student_grade(struct student *s);
void student_paixu(struct student *s);
struct	student {
	int		number;
	char	name[21];
	float math;
	float chinese;
	float english;
	float physics;
	float chemistry;
	float biology;
	float history;
	float political;
	float geographical;
	float army;
	float	avg, sum;
};

void	student_input( struct student *s )
{
	int		index,m,n;
	float   cnt;

	printf("������ѧ��ѧ��\n");
	scanf("%d", &index);
	printf("���ٴ������ѧ��ѧ����ȷ��\n");
	scanf("%d", &s[index].number);
	printf("������Ҫ¼��/�޸�ѧ��������:[%s]\n", s[index].name);
	scanf("%s", s[index].name);
	printf("��Ҫ¼�뵥�Ƴɼ�������1��Ҫ¼���Ƴɼ�������2\n");
	scanf("%d",&m);
	if(m==1){
		printf("��Ҫ¼������������1����ѧ������2��Ӣ��������3,����������4����ѧ������5��\n");
		printf("����������6������������7����ʷ������8������������9����������������10\n");
		scanf("%d",&n);
		if(n==1){
			printf("���������ĳɼ���\n");
		scanf("%f",&s[index].chinese);
		s[index].sum+=s[index].chinese;
		}
		if(n==2){
				printf("��������ѧ�ɼ���\n");
		scanf("%f",&s[index].math);
		s[index].sum+=s[index].math;
		}
		if(n==3){
			printf("������Ӣ��ɼ���\n");
		scanf("%f",&s[index].english);
		s[index].sum+=s[index].english;
		if(s[index].english!=0)
			cnt++;
		}
		if(n==4){
			printf("����������ɼ���\n");
		scanf("%f",&s[index].physics);
		s[index].sum+=s[index].physics;
		if(s[index].physics!=0)
			cnt++;
		}
		if(n==5){
			printf("�����뻯ѧ�ɼ���\n");
		scanf("%f",&s[index].chemistry);
		s[index].sum+=s[index].chemistry;
		if(s[index].chemistry!=0)
			cnt++;
		}
		if(n==6){
			printf("����������ɼ���\n");
		scanf("%f",&s[index].biology);
		s[index].sum+=s[index].biology;
		if(s[index].biology!=0)
			cnt++;
		}
		if(n==7){
			printf("���������γɼ���\n");
		scanf("%f",&s[index].political);
		s[index].sum+=s[index].political;
		if(s[index].political!=0)
			cnt++;
        }
		if(n==8){
			printf("��������ʷ�ɼ���\n");
		scanf("%f",&s[index].history);
		s[index].sum+=s[index].history;
		if(s[index].history!=0)
			cnt++;
		}
		if(n==9){
			printf("���������ɼ���\n");
		scanf("%f",&s[index].geographical);
		s[index].sum+=s[index].geographical;
		if(s[index].geographical!=0)
			cnt++;
		}
		if(n==10){
			printf("������������۳ɼ���\n");
		scanf("%f",&s[index].army);
		s[index].sum+=s[index].army;
		if(s[index].army!=0)
			cnt++;
		}
		s[index].avg=s[index].sum/10;
	}
	if(m==2){
		printf("�������ѧ�����ĳɼ���\n");
	scanf("%f",&s[index].chinese);
		s[index].sum+=s[index].chinese;
	printf("�������ѧ����ѧ�ɼ���\n");
	scanf("%f",&s[index].math);
		s[index].sum+=s[index].math;
	printf("�������ѧ��Ӣ��ɼ���\n");
	scanf("%f",&s[index].english);
		s[index].sum+=s[index].english;
	printf("�������ѧ������ɼ���\n");
	scanf("%f",&s[index].physics);
		s[index].sum+=s[index].physics;
	printf("�������ѧ����ѧ�ɼ���\n");
	scanf("%f",&s[index].chemistry);
		s[index].sum+=s[index].chemistry;
	printf("�������ѧ������ɼ���\n");
	scanf("%f",&s[index].biology);
		s[index].sum+=s[index].biology;
	printf("�������ѧ�����γɼ���\n");
	scanf("%f",&s[index].political);
		s[index].sum+=s[index].political;
	printf("�������ѧ����ʷ�ɼ���\n");
	scanf("%f",&s[index].history);
		s[index].sum+=s[index].history;
	printf("�������ѧ������ɼ���\n");
	scanf("%f",&s[index].geographical);
		s[index].sum+=s[index].geographical;
	printf("�������ѧ���������۳ɼ���\n");
	scanf("%f",&s[index].army);
		s[index].sum+=s[index].army;
		s[index].avg=s[index].sum/10;
	}
	printf("¼��/�޸ĳɹ���\n");
}

void student_output(struct student *s)
{
	int index;
	printf("������ѧ��ѧ��\n");
	scanf("%d", &index);

	printf("ѧ��������%s\n",s[index].name);
	printf("ѧ���ɼ���\n");
	printf("���ģ�%f\n",s[index].chinese);
	printf("��ѧ��%f\n",s[index].math);
	printf("Ӣ�%f\n",s[index].english);
	printf("����%f\n",s[index].physics);
	printf("��ѧ��%f\n",s[index].chemistry);
	printf("���%f\n",s[index].biology);
	printf("���Σ�%f\n",s[index].political);
	printf("��ʷ��%f\n",s[index].history);
	printf("����%f\n",s[index].geographical);
	printf("�������ۣ�%f\n",s[index].army);
	printf("�ɼ�Ϊ0�Ŀ�ĿΪδ¼���Ŀ\n");

}

void student_grade(struct student *s)
{
	int index;
	printf("������ѧ��ѧ�ţ�");
	scanf("%d",&index);
	printf("���ٴ������ѧ��ѧ����ȷ��\n");
	scanf("%d", &s[index].number);
	printf("��ѧ���ܷ�Ϊ��");
	printf("%f\n",s[index].sum);
	printf("ƽ����Ϊ��");
	printf("%f\n",s[index].avg);
 }

void student_paixu(struct student *s)//���������ܳɼ�����.
{
	int index,m,n,i,j;
	float t;
	float a[100];
	float b[100],c[100],d[100],e[100],f[100],g[100];
	float h[100],k[100],l[100],o[100];
	for(i=0;i<100;i++){
		a[i]=s[i].sum;
		b[i]=s[i].chinese;
		c[i]=s[i].math;
		d[i]=s[i].english;
		e[i]=s[i].physics;
		f[i]=s[i].chemistry;
		g[i]=s[i].biology;
		h[i]=s[i].political;
		k[i]=s[i].history;
		l[i]=s[i].geographical;
		o[i]=s[i].army;
	}
	printf("��Ҫ����������������1���ܳɼ�����������2\n");
	scanf("%d",&m);
	if(m==1){
		printf("��ѡ��ѧ�ƣ�\n");
		printf("1.���� 2.��ѧ 3.Ӣ�� 4.���� 5.��ѧ\n");
		printf("6.���� 7.���� 8.��ʷ 9.���� 10.��������\n");
		scanf("%d",&n);
		if(n==1){
			for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(b[i]<b[i+1]){
					t=b[i];
					b[i]=b[i+1];
					b[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,b[i]);
		}
		if(n==2){
				for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(c[i]<c[i+1]){
					t=c[i];
					c[i]=c[i+1];
					c[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,c[i]);
		}
		if(n==3){
				for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(d[i]<d[i+1]){
					t=d[i];
					d[i]=d[i+1];
					d[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,d[i]);
		}
		if(n==4){
				for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(e[i]<e[i+1]){
					t=e[i];
					e[i]=e[i+1];
					e[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,e[i]);
		}
		if(n==5){
				for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(f[i]<f[i+1]){
					t=f[i];
					f[i]=f[i+1];
					f[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,f[i]);
		}
		if(n==6){
				for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(g[i]<g[i+1]){
					t=g[i];
					g[i]=g[i+1];
					g[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,g[i]);
		}
		if(n==7){
				for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(h[i]<h[i+1]){
					t=h[i];
					h[i]=h[i+1];
					h[i+1]=t;
				}
		for(i=0;i<100;i++){
			printf("��%d��:�ɼ���%f\n",i+1,h[i]);
		}
		}
		if(n==8){
            for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(k[i]<k[i+1]){
					t=k[i];
					k[i]=k[i+1];
					k[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,k[i]);
		}
		if(n==9){
            for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(l[i]<l[i+1]){
					t=l[i];
					l[i]=l[i+1];
					l[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,l[i]);
		}
		if(n==10){
			for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(o[i]<o[i+1]){
					t=o[i];
					o[i]=o[i+1];
					o[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,o[i]);
		}
	}
	if(m==2){
		for(j=0;j<100;j++)
			for(i=0;i<100;i++)
				if(a[i]<a[i+1]){
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
		for(i=0;i<100;i++)
			printf("��%d��:�ɼ���%f\n",i+1,a[i]);
	}
 }

void	menu()
{
	system("cls");
	printf("***************ѧ���ɼ�����ϵͳ***************\n");
	printf("*1. �鿴�ļ�                                 *\n");
	printf("*2. д���ļ�                                 *\n");
	printf("*3. ¼��/�޸�ѧ���ɼ�                        *\n");
	printf("*4. �鿴ѧ���ɼ�                             *\n");
	printf("*5. �鿴ѧ��ƽ���ּ��ܷ�                     *\n");
	printf("*6. �ɼ�����                                 *\n");
	printf("*9. �˳�                                     *\n");
	printf("**********************************************\n");
}

void write2file( struct student s[], int count )
{
	FILE *fp;
	fp=fopen("c:\\text1\\123.dat","wb");
	fwrite(s,count,sizeof(struct student),fp);
	fclose(fp);
}

void readfromfile( struct student s[], int count )
{
	FILE *fp;
	fp=fopen("c:\\text1\\123","rb");
	fread(s,count,sizeof(struct student),fp);
	fclose(fp);
}
int main(int argc, char* argv[])
{
	struct student s[100] = {0};
	printf("%d\n", sizeof(struct student));
	char	selection;
	int		quitflag = 0;
	int     x;
	while(quitflag==0) {
		menu();
		selection = getch();
		switch(selection) {
		case '1':
			readfromfile( s, 100);
			break;
		case '2':
			write2file( s, 100);
			break;
		case '3':
			student_input(s);
			break;
		case '4':
			student_output(s);
			printf("��Ҫ�������˵�������1����Ҫ����������2\n");
			scanf("%d",&x);
			if(x==1){
			continue;
		}else{
			return 0;
		}
		case '5':
			student_grade(s);
			printf("��Ҫ�������˵�������1����Ҫ����������2\n");
			scanf("%d",&x);
			if(x==1){
			continue;
		}else{
			return 0;
		}
		case '6':
			student_paixu(s);
			printf("��Ҫ�������˵�������1����Ҫ����������2\n");
			scanf("%d",&x);
			if(x==1){
			continue;
		}else{
			return 0;
		}
		case '9':
			quitflag = 1;
			break;
		default:
			;
		}
	}
	return 0;
}