#include<stdio.h>
#include "task3.h"
#define SIZE 50
#include<string.h>
int main()
{
	char buf[SIZE] = { " " };
	char *str;
	printf("Enter string:\n");
	fgets(buf,SIZE,stdin);
	buf[strlen(buf)-1] = '\0';
	str = buf;
	if ((isPalindrome(str)) > 0)
	{
			printf("The string is a paliondrome\n");
	}

else
{
	printf("The string isn't a paliondrome\n");
}
	return 0;
}
/*
Написать программу, которая запрашивает строку и определяет, не является
ли строка палиндромом (одинаково читается и слева направо и справа налево)
Пояснение
Цель задачи - применить указатели для быстрого сканирования строки с двух концов
Состав
Программа должна состоять из функций:

- int isPalindrome(char * str) - функция, проверяющая str (ответ либо 0, либо 1)
- main() - организация ввода строки
*/