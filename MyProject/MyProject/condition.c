#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main_condition(void) {
	// ������Ʈ
	// Up and Down
	srand(time(NULL));

	int num = rand() % 100+1;

	int answer = 0;
	int chance = 5;
	while (1) {
		printf("���� ��ȸ %d��\n", chance--);
		printf("���ڸ� ���������� (1-100) :");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN! \n\n");			
		}
		else if (answer < num) {
			printf("Up! \n\n");			
		}
		else if (answer == num) {
			printf("�����Դϴ�.! \n\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��߽��ϴ�.\n");
		}

		if (chance == 0) {
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ�\n");
			break;
		}
	}
	

	return 0;
}