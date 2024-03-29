#include "main.h"

/**
*print_chessboard - prints a chess board.
*
*@a: the chess board columns.
*/
void print_chessboard(char (*a)[8])
{
	unsigned int index1, index2;

	for (index1 = 0 ; a[index1][7] ; index1++)
	{
		for (index2 = 0 ; index2 < 8 ; index2++)
		{
			_putchar(a[index1][index2]);
		}
		_putchar('\n');
	}
}
