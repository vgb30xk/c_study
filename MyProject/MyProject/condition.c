#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main_condition(void) {
	// 프로젝트
	// Up and Down
	srand(time(NULL));

	int num = rand() % 100+1;

	int answer = 0;
	int chance = 5;
	while (1) {
		printf("남은 기회 %d번\n", chance--);
		printf("숫자를 맞혀보세요 (1-100) :");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN! \n\n");			
		}
		else if (answer < num) {
			printf("Up! \n\n");			
		}
		else if (answer == num) {
			printf("정답입니다.! \n\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생했습니다.\n");
		}

		if (chance == 0) {
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다\n");
			break;
		}
	}
	

	return 0;
}