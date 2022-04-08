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
//void prime(int n)
//{
//	bool c = 0;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			c = 1;
//			break;
//		}
//	}
//	if (c) cout << "Not Prime";
//	else cout << "Prime" << endl;
//}
//int Func(int a, int b)
//{
//	int Sum = 0;
//
//	for (int i = a; i <= b; i++)
//	{
//		Sum += i;
//	}
//	return Sum;
//}

//int sum(int ar[], int g)
//{
//	int sum1 = 0;
//	for (int i = 0; i < g; i++)
//	{
//		sum1 += ar[i];
//	}
//	return sum1 / g;
//}

//void MaxMin(int ar[], int f)
//{
//	int Max = ar[0];
//	int Min = ar[0];
//	int imin = 0;
//	int imax = 0;
//	for (int i = 0; i < f; i++)
//	{
//		if (ar[i] > Max)
//		{
//			Max = ar[i];
//			imax = i;
//		}
//		if (ar[i] < Min)
//		{
//			Min = ar[i];
//			imin = i;
//		}
//	}
//	cout << "MINIMUM = " << Min << " POSITION " << imin << "\n";
//	cout << "MAXIMUM = " << Max << " POSITION " << imax << "\n";
//}

//void Element(int ar[], int g)
//{
//	int buf = 0;
//	for (int i = 0; i < g / 2 ; i++)
//	{
//		buf = ar[i];
//		ar[i] = ar[g - 1 - i];
//		ar[g - 1 - i] = buf;
//	}
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
	/*int a = 0;
	cin >> a;
	prime(a);*/

	// TASK 6

	
	/*cout << Func(1, 10);*/

	// TASK 8

	/*const int s = 5;
	int ar[] = { 4,2,7,1,9 };
	cout << sum(ar, s);*/

	// TASK 9

	/*int ar[] = { 4,2,7,1,9 };
	MaxMin(ar, 5);*/

	// TASK 10

	/*int ar[] = { 4,2,7,1,9 , 5};

	for (int i = 0; i < 6; i++)
	{
		cout << ar[i] << " ";
	}
	cout << "\n";

     Element(ar, 6);

	 for (int i = 0; i < 6; i++)
	 {
		 cout << ar[i] << " ";
	 }*/
}

