#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//test.c�ļ���  ��Ϸ���е��߼�ʵ��

void menu() {
	printf("*************************************\n");
	printf("******* 1.play    0.exit*******\n");
	printf("*************************************\n");
}
//��Ϸ������ʵ��
void game() {
	char board[ROW][COL] = {0};
	char ret = 0;
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)                               //whileѭ��ʵ��������һֱ����
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {                          //do whileʵ�ֶ������Ϸ
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input) {          //switch���ɼ򻯴��룬�����if������������
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}

	} while (input);
}

int main() {
	test();
	return 0;
}