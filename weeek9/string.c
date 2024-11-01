//string.h
#include <stdio.h>
#include <string.h>

int main() {
	char hello[6] = { 'H','e','l','l','o',0 };
	char world[6]= { 'W','o','r','l','d',0};
	char ment[] = "c is fun~";

	printf("%s %s\n%s", hello, world, ment);

	//문자열 Don't worry, be happy! 만들고
	//문자열 걱정 마 행복할거야 만들고 출력하기

	char str_1[] = "Don't worry, be happy!";
	char str_2[] = "걱정 마 행복할거야";

	printf("\n\n%s\n%s\n", str_1, str_2);

	return 0;
}