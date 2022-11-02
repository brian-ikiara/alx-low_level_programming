#include "main.h"

/**
 * print_chessboard - Function prototype
 * @a: 2-D array pointer
 *
 * Description: Prints out a chessboard! XD
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
