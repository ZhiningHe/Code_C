
#ifndef __GAME_H__
#define __GAME__H__

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 12
#define COL 12
#define COUNT 10//����

extern char show[ROW][COL];//չʾ����
extern char mine[ROW][COL];//��������

void init(char show[ROW][COL], char mine[ROW][COL], int row, int col);
//��ʼ�����麯��
void set_min( char mine[ROW][COL], int row, int col);
//�������
int count_mine( int row, int col);
//ͳ����Χ�׵ĸ���
void print_player(char show[ROW][COL], int row, int col);
//��ӡ�������
void print_mine( char mine[ROW][COL], int row, int col);
//��ӡ�������� 
int player(char show[ROW][COL], int row, int col);
//�����
int game();
//ɨ�׺���
void open_mine(char show[ROW][COL], char mine[ROW][COL], int row, int col,int x, int y);
//չ������
int count_show_mine(char show[ROW][COL], char mine[ROW][COL],int row,int col); 
//�ж��������ʣ��δ֪����ĸ���

#endif  

