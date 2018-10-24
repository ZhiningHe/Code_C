
#ifndef __GAME_H__
#define __GAME__H__

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 12
#define COL 12
#define COUNT 10//雷数

extern char show[ROW][COL];//展示数组
extern char mine[ROW][COL];//布雷数组

void init(char show[ROW][COL], char mine[ROW][COL], int row, int col);
//初始化数组函数
void set_min( char mine[ROW][COL], int row, int col);
//随机布雷
int count_mine( int row, int col);
//统计周围雷的个数
void print_player(char show[ROW][COL], int row, int col);
//打印玩家棋盘
void print_mine( char mine[ROW][COL], int row, int col);
//打印有雷棋盘 
int player(char show[ROW][COL], int row, int col);
//玩家走
int game();
//扫雷函数
void open_mine(char show[ROW][COL], char mine[ROW][COL], int row, int col,int x, int y);
//展开函数
int count_show_mine(char show[ROW][COL], char mine[ROW][COL],int row,int col); 
//判断玩家棋盘剩余未知区域的个数

#endif  

