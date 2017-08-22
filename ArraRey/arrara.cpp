#include <iostream>
#include "conio.h"
#include <algorithm> //ого яке читерство виявляється є)))

using namespace std;
/*Создайте двухмерный массив. Заполните его случайными числами и покажите на экран.
Пользователь выбирает количество сдвигов и положение (влево, вправо, вверх, вниз).
Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический.
Например, если мы имеем следующий массив
1 2 0 4 5 3
4 5 3 9 0 1
и пользователь выбрал сдвиг на 2 разряда вправо, то мы получим
5 3 1 2 0 4
0 1 4 5 3 9

5
Даний двухвимірний масив розмірністю 5X4. Заповніть його випадковими числами із інтервалу -20.. 20:
Виведіть масив на екран та знайдіть кількість елементів, значення яких рівне нулю.
знайдіть середнє арифметичне значення кожного рядка.
знайдіть максимальне та мінімальне значення матриці.
Вивести на екран елементи вказаного користувачем рядка або вказаного користувачем стовпця.
Поміняти місцями перший рядок з останнім, другий з передостаннім і т.д. (реверс матриці по рядках). Вивести новоутворену матрицю */

void Matrix();
void Up(int inp, int inArr[2][2]);
void Down(int inp, int inArr[2][2]);
void Left(int inp, int inArr[2][2]);
void Rigth(int inp, int inArr[2][2]);
void PrintOut(int printArr[2][2]);
void Operations();


void main()
{
	int input;
	enum Menu {
		SHIFT = 1,
		OPER
	};
	cout << "Hello \n" << "\t\t ::1.2DArrayShift\n\n" << "\t\t ::2.2DArrayOperations\n\n";
	cin >> input;

	switch (input)
	{
	case SHIFT:
		Matrix();
		break;
	case OPER:
		Operations();
		break;
	}
}

void Matrix()
{
	enum Move {
		UP = 'u',
		DOWN = 'd',
		LEFT = 'l',
		RIGHT = 'r'
	};
	char cooInput;
	int locInput;
	int marArr[2][2];
	for (int o = 0; o < 2; o++)
	{
		for (int q = 0; q < 2; q++)
		{
			marArr[o][q] = rand() % 44;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++) {
			cout << "\t" << marArr[i][j];
		}
		cout << "\n";
	}
	cout << "In which direction u want shift array?\n" << ".::Args(u, d, l, r)::.\n";
	cin >> cooInput;
	cout << "On how much steps u want shift array?\n";
	cin >> locInput;
	switch (cooInput)
	{
	case UP:
		Up(locInput, marArr);
		break;
	case DOWN:
		Down(locInput, marArr);
		break;
	case LEFT:
		Left(locInput, marArr);
		break;
	case RIGHT:
		Rigth(locInput, marArr);
		break;
	}
}
void Up(int inp, int inArr[2][2])
{
	int const x = 2, y = 2;
	int outArr[x][y];
	for (int v = 0; v < x; v++)
	{
		for (int g = 0; g < y; g++)
		{
			/*Watch. Understand
			https://www.youtube.com/watch?v=Jtu6dJ0Cb94
			*/
		}
	}
	PrintOut(outArr);
}

void Down(int inp, int inArr[2][6])
{
}
void Left(int inp, int inArr[2][6])
{
}
void Rigth(int inp, int inArr[2][6])
{
}

void PrintOut(int printArr[2][2])
{
	for (int walk = 0; walk < 2; walk++)
	{
		for (int walkY = 0; walkY < 2; walkY++)
		{
			cout << "\t" << "{" << printArr[walk][walkY] << "}";
		}
		cout << "\n";
	}
}

void Operations()
{
	int max, min, o, q, sum = 0, row, column;
	int counter = 0;
	const int x = 5, y = 4;
	int myArr[x][y];
	max = 0;
	min = 0;
	for (o = 0; o < x; o++)
	{
		for (q = 0; q < y; q++)
		{
			myArr[o][q] = rand() % 51 + (-20);
			cout << "\t" << myArr[o][q];
			sum += myArr[o][q];
			if (myArr[o][q] == 0)
			{
				counter++;
			}
			//знайдіть максимальне та мінімальне значення матриці.
			if (myArr[o][q] >= max)
			{
				max = myArr[o][q];
			}
			if (myArr[o][q] < min)
			{
				min = myArr[o][q];
			}
			//знайдіть середнє арифметичне значення кожного рядка.
		}
		cout << "\n";
		cout << "\n";
		cout << "0 elements in matrix " << counter << endl;
		cout << "Average of " << o + 1 << " column is " << sum << endl;
		cout << "Maximum of  " << o + 1 << " column is " << max << "  Minimum of matrix is " << min << endl;
	}
	_getch();
	cout << "Eneter number of column " << endl;
	cin >> column;
	cout << "and row" << endl;
	cin >> row;
	int v, h;
	for (v = 0; v < x; v++)
	{
		for (h = 0; h < y; h++)
		{
			if (column == v)
			{
				if (row == h)
				{
					cout << "[" << myArr[v][h] << "]\n";
				}
			}
		}
	}
	_getch();
	reverse(begin(myArr), end(myArr));
	for (v = 0; v < x; v++)
	{
		for (h = 0; h < y; h++)
		{
			cout << "\tReverse " << "[" << myArr[v][h] << "]\n";
		}
		cout << "\n";
	}
}



