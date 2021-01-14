#pragma once

#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <string>

#include <cstring>
using namespace std;

//перечислення
enum Move {
	STOP = 0,
	LEFT,
	UP,
	RIGHT,
	DOWN
};

void startSettings();
void draw();
void input();
void logic();

enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

void SetColor(int text, int background);
void ShowMainDisplay();