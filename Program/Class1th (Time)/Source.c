#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int list[], int len) {

	for (int i = 0; i < len; i++) {
		int seed = rand() % len;
		int temp = list[seed];
		list[seed] = list[i];
		list[i] = temp;
	}

}

int main() {
#pragma region rand Function
	// 0 ~ 32767 사의 난수 값을 반환하는 함수입니다.

	// UTC 기준으로 1970년 1월 1 일 0시 0분 초부터 경과된
	// 시간을 초(sec)로 반환하는 함수입니다.

	/*srand(time(NULL));

	int random = rand() % 10 + 1;

	printf("random : %d\n", random);*/

#pragma endregion

#pragma region Shuffle Function

	/*int card[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int len = sizeof(card) / sizeof(int);

	srand(time(NULL));

	shuffle(card, len);

	for (int i = 0; i < len; i++) {
		printf("list[%d] = %d\n", i, card[i]);
	}*/

#pragma endregion

#pragma region Game
	// computer는 1 ~ 50 사이에 난수의 값을 가짐
	// 플레이어는 5번의 기회
	// 출력예시) 컴퓨터가 가지고 있는 값보다 작습니다.
	// 출력예시) 컴퓨터가 가지고 있는 값보다 큽니다.
	// 출력예시) 틀리면 플레이어 기회 -1 및 D E F E A T, 맞출경우 V I C T O R Y

	srand(time(NULL));

	int computer = rand() % 50 + 1;

	int player = 5;

	int number = 0;

	for (int i = 0; i < 5; i++) {

		printf("값을 입력해주세요 : ");
		scanf_s("%d", &number);

		if (number < computer) {
			player--;
			printf("컴퓨터가 가지고 있는 값보다 작습니다.\n");
			printf("기회가 %d번 남았습니다.\n\n", player);
		}
		else if (number > computer) {
			player--;
			printf("컴퓨터가 가지고 있는 값보다 큽니다.\n");
			printf("기회가 %d번 남았습니다.\n\n", player);
		}
		else if (number == computer) {
			printf("컴퓨터의 값 : %d\n", computer);
			printf("V I C T O R Y\n");
			break;
		}

		if (player == 0) {
			printf("컴퓨터의 값 : %d\n", computer);
			printf("D E F A U L T");
		}

	}


#pragma endregion


	return 0;
}