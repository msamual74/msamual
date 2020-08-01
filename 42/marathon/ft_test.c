
#include "ft.h"

int main()
{
	int **board;
	int row[0] = {5,1,2,3,4,9,5,7,-1,-1,3};

	*board = row;
	ft_putnbr(upper(board,0,9));
}
