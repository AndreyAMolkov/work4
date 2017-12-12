#define SIZE 50
#define M 200
#include<stdio.h>
int main()
{
	int i = 0,size=0;
	char *str[SIZE];
	char txt[SIZE][M] = { 0 };
	char word = " ";
	FILE *fp=fopen("fp.txt", "r");//a file must lay in the programm folder with name "fp.txt", the file is only for read
	FILE *fpFinal = fopen("fpFinal.txt", "w");//a new file will be created in the programm folder , the file is write only
	while ((str[i]=fgets(txt[i],M,fp))!=NULL)
	{
		i++;
	}
	lineSort(str, i);// function for sort of line
	printLinesToFile(str, i, fpFinal);//function for print
	
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