#include "stdafx.h"
#include <stdio.h>
#include <math.h>
void stu_aver(int s[][5], int m, int n);           
void course_aver(int s[][5], int m, int n);           
void highest(int s[][5], int m , int n);     
void variance(int s[][5], int m, int n);          
double av[10];                                         
int main()
{
	int stu[10][5], i, j;
	for (i=0; i<10; i++){                               //����10��ѧ����5�ſγɼ�
		printf("Please enter No.%d student score: ", i+1);
		for (j=0; j<5; scanf("%d", &stu[i][j++]));
	}
	stu_aver(stu, 10, 5);                               //����ѧ��ƽ���ֺ���
	course_aver(stu, 10, 5);                            //���ÿγ�ƽ���ֺ���
	highest(stu, 10, 5);                                //������߷ֺ���
	variance(stu, 10, 5); 
	return 0;
}
void stu_aver(int s[][5], int m, int n)
{
	int sum, i, j;
	for (i=0; i<m; printf("%dѧ��ƽ���ɼ�: %.2lf\n", i++, (double)sum/(double)n), av[i++]=(double)sum/(double)n)
		for (j=0, sum=0; j<n; sum+=s[i][j++]);
}
void course_aver(int s[][5], int m, int n)
{
	int sum, i, j;
	for (j=0; j<n; printf("��%d��ƽ���ɼ�: %.2lf\n", j+1, (double)sum/(double)m), j++)
		for (i=0, sum=0; i<m; sum+=s[i++][j]);
}
void highest(int s[][5], int m, int n)
{
	for (int i=0, max=0, st, cu; i<m; i++)
		for (int j=0; j<n; s[i][j]>max ? max=s[i][j++], st=i+1, cu=j : j++);
	printf("��߷���%dѧ����%d��.\n", st, cu);
}
void variance(int s[][5], int m, int n)
{
	double var, sum=0, sum2=0;
	for (int i=0, j=0; i<m; sum+=av[i++], sum2+=pow(av[j++], 2));
	var=sum2/m-pow(sum/m, 2);
	printf("������%lf\n", var);
}
