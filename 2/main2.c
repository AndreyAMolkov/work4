#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
	int i = 0, j = 0,count=0;
	char ch = " ";
	//char buf[SIZE] = { 0 };
	char in[SIZE] = {0};
	char *out[SIZE] = {0};
	printf("Enter line of word:\n");
	
	gets(in, SIZE, stdin);

	reverseWords(in, out);
	//while ((word =**(out + i)) != NULL)
	//{
		while (out[j] != '\0')
		{
			fputs(out[j], stdout);
			fputs(" ", stdout);
			j++;
		}
	//}
	return 0;
}
/*�������� ���������, ������� � ������� ������� ���������� ������� �����
   ������ � �������� �������. ������:
   "���� ����� ���� �����" -> "����� ���� ����� ����"
���������
��� ������� ������ ��������� ������ ���������� �� char, 
� ������� ��������� ������ ������ �������� ������� �����. 
����� ������������ ����� ������, ��� ������������� ����� ������� �� ����������.
������ �� ���������� ������ ����������� ������ ������� reverseWords.
�����
�������� ������ �������� �� �������:
    - char * reverseWords(char * in, char *out) - �������, ���������������� ����� �� in � ������������ �� � out
    - main() - ����������� ����� ������
��������� ��� �����: task2.h,task2.c,main2.c.

*/