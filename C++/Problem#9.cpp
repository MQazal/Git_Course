#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
Problem#9/3: Write a Program to fill two 3X3 matrices by random numbers from 1 -> 10
, then print the middle row and middle column.
*/

void PrintMessage(string Message)
{
	cout << "\n" << Message << endl;
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixByRandomNumbers(short Matrix[3][3], short Rows, short Columns)
{
	// Nested Loop 1: Rows
	// Nested Loop 2: Columns (each Row will face its Columns)

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			Matrix[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(short Matrix[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			printf("%0*d    ", 2, Matrix[i][j]);
		}
		cout << '\n';
	}
}

void GetRowElementsOfMatrix(short Matrix[3][3], short RowNumber, short Columns)
{
	for (short j = 0; j < Columns; j++)
	{
		printf("%0*d    ", 2, Matrix[RowNumber][j]);
	}
}

void GetColumnElementsOfMatrix(short Matrix[3][3], short Rows, short ColumnNumber)
{
	for (short i = 0; i < Rows; i++)
	{
		printf("%0*d    ", 2, Matrix[i][ColumnNumber]);
	}
}

void GetMiddleRowOfMatrix(short Matrix[3][3], short Rows, short Columns)
{
	short MiddleRow = Rows / 2;

	for (short j = 0; j < Columns; j++)
	{
		printf("%0*d    ", 2, Matrix[MiddleRow][j]);
	}
}

void GetMiddleColumnOfMatrix(short Matrix[3][3], short Rows, short Columns)
{
	short MiddleColumn = Columns / 2;

	for (short i = 0; i < Rows; i++)
	{
		printf("%0*d    ", 2, Matrix[i][MiddleColumn]);

	}
}

int main()
{
	srand((unsigned)time(NULL));
	short Matrix[3][3];

	FillMatrixByRandomNumbers(Matrix, 3, 3);

	PrintMessage("Random Numbers in Matrix:");

	PrintMatrix(Matrix, 3, 3);

	PrintMessage("Middle Row of Matrix by Function of Specific Row:");

	GetRowElementsOfMatrix(Matrix, 1, 3);

	PrintMessage("Middle Column of Matrix by Function of Specific Column:");

	GetColumnElementsOfMatrix(Matrix, 3, 1);

	PrintMessage("Middle Row of Matrix by Function of Middle Row:");

	GetMiddleRowOfMatrix(Matrix, 3, 3);

	PrintMessage("Middle Column of Matrix by Function of Middle Column:");

	GetMiddleColumnOfMatrix(Matrix, 3, 3);



	system("pause>0");
    return 0;
}