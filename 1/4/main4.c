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
Написать программу, сортирующую строки (см. задачу 1), но использующую
строки, прочитанные из текстового файла. Результат работы программы также
записывается в файл.
Пояснение

Состав

Программа должна состоять из функций:

- void lineSort(char *str[],int size) - функция, сортирующая массив указателей
- void printLinesToFile(const char *str[],int size,FILE *fp) - функция, печатающая строки в порядке массива str
- main() - организация ввода строк в двумерный символьный массив
Создаются три файла: task4.h,task4.c,main4.c.*/