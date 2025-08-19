#include <stdio.h>
#include <Windows.h>

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

	//move(5, 5);

	while (1) {

		int ch = _getch();

		

		switch (ch) {
			case UP:
				printf("UP\n");
				break;
			case LEFT:
				printf("LEFT\n");
				break;
			case RIGHT:
				printf("RIGHT\n");
				break;
			case DOWN:
				printf("DOWN\n");
				break;
			default:
				break;
		}
 
	}

	return 0;
}