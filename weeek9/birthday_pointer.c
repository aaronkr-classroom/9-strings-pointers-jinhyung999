//birthday_pointer.c
#include <stdio.h>

int main(void) {
	short birthday;
	short* ptr;//������ ���� ����
	ptr = &birthday;//birthday ������ �ּҸ� ptr������ ����

	int intVar = 42;
	float floatVar = 3.14;
	char charVar = 'A';
	double doubleVar = 9.81;

	//������ ����
	int* intPtr = &intVar;
	float* floatPtr = &floatPtr;
	char* charPtr = &charVar;
	double* doublePtr = &doublePtr;

	//%p ������ �޸� �ּҸ� 16������ ���
	printf("birthday ������ �ּҴ� %p�Դϴ�.\n\n", ptr);

	//���� ���� �ּ����
	printf("intVar ���� ��: %d, �ּ�: %p\n",intVar ,intPtr);
	printf("floatVar ���� ��: %.2f, �ּ�: %p\n",floatVar, floatPtr);
	printf("charVar ���� ��: %c, �ּ�: %p\n",charVar, charPtr);
	printf("doubleVar ���� ��: %.2f, �ּ�: %p\n",doubleVar, doublePtr);

	return 0;
}