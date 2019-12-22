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

	printf("请输入学生学号\n");
	scanf("%d", &index);
	printf("请再次输入该学生学号以确认\n");
	scanf("%d", &s[index].number);
	printf("请输入要录入/修改学生的名字:[%s]\n", s[index].name);
	scanf("%s", s[index].name);
	printf("若要录入单科成绩请输入1，要录入多科成绩请输入2\n");
	scanf("%d",&m);
	if(m==1){
		printf("若要录入语文请输入1，数学请输入2，英语请输入3,物理请输入4，化学请输入5，\n");
		printf("生物请输入6，政治请输入7，历史请输入8，地理请输入9，军事理论请输入10\n");
		scanf("%d",&n);
		if(n==1){
			printf("请输入语文成绩：\n");
		scanf("%f",&s[index].chinese);
		s[index].sum+=s[index].chinese;
		}
		if(n==2){
				printf("请输入数学成绩：\n");
		scanf("%f",&s[index].math);
		s[index].sum+=s[index].math;
		}
		if(n==3){
			printf("请输入英语成绩：\n");
		scanf("%f",&s[index].english);
		s[index].sum+=s[index].english;
		if(s[index].english!=0)
			cnt++;
		}
		if(n==4){
			printf("请输入物理成绩：\n");
		scanf("%f",&s[index].physics);
		s[index].sum+=s[index].physics;
		if(s[index].physics!=0)
			cnt++;
		}
		if(n==5){
			printf("请输入化学成绩：\n");
		scanf("%f",&s[index].chemistry);
		s[index].sum+=s[index].chemistry;
		if(s[index].chemistry!=0)
			cnt++;
		}
		if(n==6){
			printf("请输入生物成绩：\n");
		scanf("%f",&s[index].biology);
		s[index].sum+=s[index].biology;
		if(s[index].biology!=0)
			cnt++;
		}
		if(n==7){
			printf("请输入政治成绩：\n");
		scanf("%f",&s[index].political);
		s[index].sum+=s[index].political;
		if(s[index].political!=0)
			cnt++;
        }
		if(n==8){
			printf("请输入历史成绩：\n");
		scanf("%f",&s[index].history);
		s[index].sum+=s[index].history;
		if(s[index].history!=0)
			cnt++;
		}
		if(n==9){
			printf("请输入地理成绩：\n");
		scanf("%f",&s[index].geographical);
		s[index].sum+=s[index].geographical;
		if(s[index].geographical!=0)
			cnt++;
		}
		if(n==10){
			printf("请输入军事理论成绩：\n");
		scanf("%f",&s[index].army);
		s[index].sum+=s[index].army;
		if(s[index].army!=0)
			cnt++;
		}
		s[index].avg=s[index].sum/10;
	}
	if(m==2){
		printf("请输入该学生语文成绩；\n");
	scanf("%f",&s[index].chinese);
		s[index].sum+=s[index].chinese;
	printf("请输入该学生数学成绩：\n");
	scanf("%f",&s[index].math);
		s[index].sum+=s[index].math;
	printf("请输入该学生英语成绩：\n");
	scanf("%f",&s[index].english);
		s[index].sum+=s[index].english;
	printf("请输入该学生物理成绩：\n");
	scanf("%f",&s[index].physics);
		s[index].sum+=s[index].physics;
	printf("请输入该学生化学成绩：\n");
	scanf("%f",&s[index].chemistry);
		s[index].sum+=s[index].chemistry;
	printf("请输入该学生生物成绩：\n");
	scanf("%f",&s[index].biology);
		s[index].sum+=s[index].biology;
	printf("请输入该学生政治成绩：\n");
	scanf("%f",&s[index].political);
		s[index].sum+=s[index].political;
	printf("请输入该学生历史成绩：\n");
	scanf("%f",&s[index].history);
		s[index].sum+=s[index].history;
	printf("请输入该学生地理成绩：\n");
	scanf("%f",&s[index].geographical);
		s[index].sum+=s[index].geographical;
	printf("请输入该学生军事理论成绩：\n");
	scanf("%f",&s[index].army);
		s[index].sum+=s[index].army;
		s[index].avg=s[index].sum/10;
	}
	printf("录入/修改成功！\n");
}

void student_output(struct student *s)
{
	int index;
	printf("请输入学生学号\n");
	scanf("%d", &index);

	printf("学生姓名：%s\n",s[index].name);
	printf("学生成绩：\n");
	printf("语文：%f\n",s[index].chinese);
	printf("数学：%f\n",s[index].math);
	printf("英语：%f\n",s[index].english);
	printf("物理：%f\n",s[index].physics);
	printf("化学：%f\n",s[index].chemistry);
	printf("生物：%f\n",s[index].biology);
	printf("政治：%f\n",s[index].political);
	printf("历史：%f\n",s[index].history);
	printf("地理：%f\n",s[index].geographical);
	printf("军事理论：%f\n",s[index].army);
	printf("成绩为0的科目为未录入科目\n");

}

void student_grade(struct student *s)
{
	int index;
	printf("请输入学生学号：");
	scanf("%d",&index);
	printf("请再次输入该学生学号以确认\n");
	scanf("%d", &s[index].number);
	printf("该学生总分为：");
	printf("%f\n",s[index].sum);
	printf("平均分为：");
	printf("%f\n",s[index].avg);
 }

void student_paixu(struct student *s)//单科排序，总成绩排序.
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
	printf("若要按单科排序请输入1，总成绩排序请输入2\n");
	scanf("%d",&m);
	if(m==1){
		printf("请选择学科：\n");
		printf("1.语文 2.数学 3.英语 4.物理 5.化学\n");
		printf("6.生物 7.政治 8.历史 9.地理 10.军事理论\n");
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
			printf("第%d名:成绩：%f\n",i+1,b[i]);
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
			printf("第%d名:成绩：%f\n",i+1,c[i]);
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
			printf("第%d名:成绩：%f\n",i+1,d[i]);
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
			printf("第%d名:成绩：%f\n",i+1,e[i]);
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
			printf("第%d名:成绩：%f\n",i+1,f[i]);
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
			printf("第%d名:成绩：%f\n",i+1,g[i]);
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
			printf("第%d名:成绩：%f\n",i+1,h[i]);
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
			printf("第%d名:成绩：%f\n",i+1,k[i]);
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
			printf("第%d名:成绩：%f\n",i+1,l[i]);
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
			printf("第%d名:成绩：%f\n",i+1,o[i]);
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
			printf("第%d名:成绩：%f\n",i+1,a[i]);
	}
 }

void	menu()
{
	system("cls");
	printf("***************学生成绩管理系统***************\n");
	printf("*1. 查看文件                                 *\n");
	printf("*2. 写入文件                                 *\n");
	printf("*3. 录入/修改学生成绩                        *\n");
	printf("*4. 查看学生成绩                             *\n");
	printf("*5. 查看学生平均分及总分                     *\n");
	printf("*6. 成绩排序                                 *\n");
	printf("*9. 退出                                     *\n");
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
			printf("若要返回主菜单请输入1，若要结束请输入2\n");
			scanf("%d",&x);
			if(x==1){
			continue;
		}else{
			return 0;
		}
		case '5':
			student_grade(s);
			printf("若要返回主菜单请输入1，若要结束请输入2\n");
			scanf("%d",&x);
			if(x==1){
			continue;
		}else{
			return 0;
		}
		case '6':
			student_paixu(s);
			printf("若要返回主菜单请输入1，若要结束请输入2\n");
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