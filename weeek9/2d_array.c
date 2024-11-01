//2d_array.c
#include <stdio.h>

#define STU_NUM 3
#define GRADES 4
int main(void) {
	int grades[5][4] = {
		{85, 45, 70, 93},
		{74, 86, 93, 45},
		{67, 37, 99, 97}
	};
	//���л��� ���� ���
	printf("Student grades\n");
	for (int i = 0; i < STU_NUM; i++) {//�л�
		printf("Student %d: ", i + 1);
		for (int j = 0; j < GRADES; j++) {//����
			printf("%d ", grades[i][j]);
		}
		printf("\n");
	}

	//�л��� ������
	printf("\nEach Student's Average:\n");
	for (int i = 0; i < STU_NUM; i++) {
		int sum = 0;
		for (int j = 0; j < GRADES; j++) {
			sum += grades[i][j];
		}
		float average = sum / (float)GRADES;
		printf("Student %d: %.2f\n", i + 1, average);
	}
}