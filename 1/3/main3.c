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
�������� ���������, ������� ����������� ������ � ����������, �� ��������
�� ������ ����������� (��������� �������� � ����� ������� � ������ ������)
���������
���� ������ - ��������� ��������� ��� �������� ������������ ������ � ���� ������
������
��������� ������ �������� �� �������:

- int isPalindrome(char * str) - �������, ����������� str (����� ���� 0, ���� 1)
- main() - ����������� ����� ������
*/