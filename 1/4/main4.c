#define SIZE 50
#define M 200
#include<stdio.h>
int main()
{
	int i = 0,size=0;
	char *str[SIZE];
	char txt[SIZE][M] = { 0 };
	char word = " ";
	FILE *fp=fopen("fp.txt", "r");
	FILE *fpFinal = fopen("fpFinal.txt", "w");
	while ((str[i]=fgets(txt[i],M,fp))!=NULL)
	{
		i++;
	}
	lineSort(str, i);
	printLinesToFile(str, i, fpFinal);
	
	return 0;
}

/*
�������� ���������, ����������� ������ (��. ������ 1), �� ������������
������, ����������� �� ���������� �����. ��������� ������ ��������� �����
������������ � ����.
���������

������

��������� ������ �������� �� �������:

- void lineSort(char *str[],int size) - �������, ����������� ������ ����������
- void printLinesToFile(const char *str[],int size,FILE *fp) - �������, ���������� ������ � ������� ������� str
- main() - ����������� ����� ����� � ��������� ���������� ������
��������� ��� �����: task4.h,task4.c,main4.c.*/