//string_funcs.c
#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 100

int main(void) {
	//사용자에게 문자열 두개 받기
	char str1[STRING_LENGTH],
		 str2[STRING_LENGTH],
		 str3[STRING_LENGTH];//복사나 결합할 문자열

	printf("Enter first string >>> ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = '\0';

	printf("Enter second string >>> ");
	fgets(str2, sizeof(str2), stdin);
	str1[strlen(str2) - 1] = '\0';

	printf("\n-------\n");

	//문자열 길이를 출력
	printf("str1 strlen: %d\nstr2 strlen: %d\n", (int)strlen(str1), (int)strlen(str2));
	//str1은 str3으로 복사와 출력
	strcpy_s(str3,sizeof(str3), str1);
	printf("복사후 str3: %s\n", str3);
	//str1와 str2를 결합후출력
	strcat_s(str1, sizeof(str1),str2);
	printf("str1과 str2 결합 후:\n%s", str1);
}