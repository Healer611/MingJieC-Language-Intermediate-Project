#pragma once

#include <stdio.h>
#include <Windows.h>
int map[19][19];//����
int flag;//�غ���

//��ʼ��
void init();

//�ж���Ӯ
int isWin(int x, int y);

//�������
int playerMove(int x, int y);

//��Ϸ�˵�
void menuView();

//��ӡ����
void gameView_ShowMap();

//�ж���Ӯ
void winView();