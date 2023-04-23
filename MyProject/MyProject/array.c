#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	srand(time(NULL));
	printf("\n\n === 아빠는 대머리 게임 === \n\n");
	int answer;
	int treatment = rand() % 4;

	int cutShowBottle = 0;
	int prevCutShowBottle = 0;
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, 0, 0,0 };
		do {
			cutShowBottle = rand() % 2 + 2;
		} while (cutShowBottle == prevCutShowBottle);
		prevCutShowBottle = cutShowBottle;

		int isincluded = 0;
		printf(" > %d 번쨰 시도 : ", i);

		for (int j = 0; j < cutShowBottle; j++) {
			int randBottle = rand() % 4;
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isincluded = 1;
				}
			}
			else {
				j--;
			}
		}
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d ", k + 1);
			}
		}
			printf(" 물약을 머리에 바릅니다\n\n");
		
		if (isincluded == 1) {
			printf("성공 머리가 났어요\n\n");
		}
		else {
			printf("실패 머리가 나지 않았어요\n\n");
		}		
		printf("\n 계속 하려면 아무키나 누르세요.");
		getchar();
	}
	printf("\n\n 발모제는 몇번일까요?");
	scanf_s("%d", &answer);

	if (answer == treatment+1) {
		printf("\n정답입니다.\n\n");
	}
	else {
		printf("\n틀렸습니다. 정답은 %d 입니다.\n\n", treatment + 1);
	}
	return 0;
}
