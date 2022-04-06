#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;
//void SetCursor(int x, int y, int color)
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD position;
//	position.X = x;
//	position.Y = y;
//	SetConsoleCursorPosition(h,position);
//	SetConsoleTextAttribute(h,color);
//}
//void Line(int x, char y, int color, bool c)
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD position;
//	SetConsoleCursorPosition(h, position);
//	SetConsoleTextAttribute(h, color);
//	/*position.X = 15;
//	position.Y = 15;*/
//	if (c == true)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			cout << y;
//		}
//
//	}
//	else if (c == false)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			cout << y << "\n";
//		}
//	}
//	
//}
//void Rectangle(int height, int width, char ramka, char zalivka, int color, int color1, int a, int b)
//{
//	COORD position;
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	position.X = a;
//	position.Y = b;
//	HANDLE h1 = GetStdHandle(STD_OUTPUT_HANDLE);
//	HANDLE h2 = GetStdHandle(STD_OUTPUT_HANDLE);
//	for (int y = 0; y < height; y++)
//	{
//		for (int x = 0; x < width; x++)
//		{
//			if (x == 0 || y == 0 || x == width - 1 || y == height - 1)
//			{
//				SetConsoleTextAttribute(h2, color);
//				cout << "#";
//				b++;
//			}
//			else
//			{
//				SetConsoleTextAttribute(h2, color1);
//				cout << "$";
//			}
//			
//		}
//		cout << "\n";
//	}
//}
//void Func(int Cube = 1)
//{
//	int a = 1;
//	cin >> Cube;
//	for (int i = 0; i < 3; i++)
//	{
//		a *= Cube;
//	}
//	cout << a;
//}


int main()
{
    // TASK 1

	/*int a, b, c;
	cin >> a >> b >> c;
	SetCursor(a, b, c);
	cout << "HELLO!\n";*/

	// TASK 2

	/*Line(20,'@',4,true);*/
	
	// TASK 3
	
	/*Rectangle(6, 7, '#', '$',3, 5, 9, 10);*/

	// TASK 4

	/*Func(1);*/

	// TASK 5
}

