#include <stdio.h>

#define SIZE 10

int main() {

#pragma region GetAsynckeyState
	// Windows API에서 제공하는 입력 처리 함수로, 지정된 키의 상태를
	// 비동적으로 확인할 때 사용되는 함수입니다.

	// Key State

	// 0x0000 : 이전에 누른 적이 없고, 호출 시점에도 눌려있지 않은 상태.

	// 0x0001 : 이전에 누른 적이 있고, 호출 시점에는 눌려있지 않은 상태.

	// 0x8000 : 이전에 누른 적이 없고, 호출 시점에는 눌려있는 상태.

	// 0x8001 : 이전에 누른 적이 있고, 호출 시점에도 눌려있는 상태.

	// 포인트 배열 - 짝수는 탐정, 홀수는 의뢰인

	const char * text[SIZE] = { 
		"오랜만이네요", "오랜만이군", "무슨 일 이죠 ?", "어떻게 지내는 지 궁금해서 왔네",
		"저야 잘 지내죠", "그렇군", "뭔가 의뢰할 게 있어보이는군요", "사실은 그렇다네",
		"이야기하시죠", "그럼..." };

	
	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0) {
			printf("탐정 : %s\n", text[i]);
		}
		else {
			printf("의뢰인 : %s\n", text[i]);
		}
	}

#pragma endregion


	return 0;
}