#include <stdio.h>
#include <Windows.h>

#define WIDTH 10
#define HEIGHT 5

enum COLOR
{
	BLACK,
	DARKBLUE,
	DARKGREEN,
	DARKSKYBLUE,
	DARKRED,
	DARKVIOLET,
	DARKYELLOW,
	GRAY,
	DARKGRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE
};

int main() {

	/*char map[HEIGHT][WIDTH] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{0, 0, 1, 0, 0, 0, 0, 1, 1, 1},
		{1, 0, 1, 0, 1, 1, 0, 1, 1, 1},
		{1, 0, 0, 0, 1, 1, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 0, 1}
	};

	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			if (map[i][j] == 1) {
				printf("■");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}*/

#pragma region 열거형
	// 서로 관련 있는 상수들을 하나의 집합으로 정의하여 이름으로
	// 사용할 수 있도록 설계된 자료형입니다.

	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);

	//printf("League of Legend");

	// 색깔별로 출력하되 5의 배수 pause 

	for (int i = 0; i <= 15; i++) {

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

		printf("League of Legend\n");

		if (i % 5 == 0 && i != 0) {
			system("pause");
		}

	}

#pragma endregion


	return 0;
}