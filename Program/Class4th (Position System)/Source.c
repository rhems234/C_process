#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void move(int x, int y) {

	// x와 y축을 설정하는 구조체 입니다.
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

	printf("★");
}

int main() {

	int x = 0;
	int y = 0;

	// 8. 21 더블 엔드 버퍼링 

	while (1) {

		char ch = _getch();

		if (ch == 27) {
			printf("ESC 입력\n");
			break;
		}

		if (ch == 0 || ch == -32) {
			ch = _getch();
		}

		switch (ch) {

		case UP:
			if (y > 0) {
				y--;
			}
			break;
		case LEFT:
			if (x > 0) {
				x -= 2;
			}
			break;
		case RIGHT:
			x += 2;
			break;
		case DOWN:
			y++;
			break;
		default:
			printf("Exception");
			break;
		}

		system("cls");

		move(x, y);

		printf("\n");
	}

	return 0;
}