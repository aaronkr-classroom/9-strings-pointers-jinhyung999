//string.h
#include <stdio.h>
#include <string.h>

int main() {
	char hello[6] = { 'H','e','l','l','o',0 };
	char world[6]= { 'W','o','r','l','d',0};
	char ment[] = "c is fun~";

	printf("%s %s\n%s", hello, world, ment);

	//���ڿ� Don't worry, be happy! �����
	//���ڿ� ���� �� �ູ�Ұž� ����� ����ϱ�

	char str_1[] = "Don't worry, be happy!";
	char str_2[] = "���� �� �ູ�Ұž�";

	printf("\n\n%s\n%s\n", str_1, str_2);

	return 0;
}