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
	
	int card[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int len = sizeof(card) / sizeof(int);

	srand(time(NULL));

	shuffle(card, len);

	for (int i = 0; i < len; i++) {
		printf("list[%d] = %d\n", i, card[i]);
	}

#pragma endregion

	return 0;
}