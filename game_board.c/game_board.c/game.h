      #pragma once
#ifndef __GAME_H__
#define _GAME_H_

#define ROW 3  
#define COL 3

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void menu();
void game();
void Create_board(char board[ROW][COL], int row,int col);
void Print_board(char board[ROW][COL], int row, int col);
void Player(char board[ROW][COL], int row, int col);
void Compurter(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
int Full(char board[ROW][COL], int row, int col);

#endif