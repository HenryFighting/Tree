#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//test.c文件放  游戏运行的逻辑实现

void menu() {
	printf("*************************************\n");
	printf("******* 1.play    0.exit*******\n");
	printf("*************************************\n");
}
//游戏的整个实现
void game() {
	char board[ROW][COL] = {0};
	char ret = 0;
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)                               //while循环实现两个人一直下棋
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {                          //do while实现多次玩游戏
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input) {          //switch语句可简化代码，如果用if语句代码会更复杂
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}

	} while (input);
}

int main() {
	test();
	return 0;
}