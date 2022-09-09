#include "game_chess.h"


void menu()
{
    printf("*********************************\n");
    printf("*           1:play  2:exit      *\n");
    printf("*********************************\n");
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if(i<row-1)
			printf("---|---|---\n");
	}
}

void PlayerMove(char board[][COL], int row, int col) 
{
	int x = 0;
	int y = 0;

	printf("player's round:>\n");

	while (1)
	{
		printf("Please enter the coordinates of your chess:");
		scanf("%d %d", &x, &y);
		//Judge the validity of coordinates
		/*

			Please improve this function

		*/
		break;


	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("computer's round:>\n");

	while (1)
	{
		/*

			Please improve this function

		*/
		break;
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	/*

			How to judge whether the chessboard is full? Please improve this function

	*/

	return 0;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//Judge three lines
	/*

			Please improve this function

	*/
	
	//Judge three columns
	/*

			Please improve this function

	*/

	//Judge diagonal
	/*

			Please improve this function

	*/

	//Judge the draw
	//If the chessboard is full, it will return 1; if not, it will return 0
	/*

			Please improve this function

	*/

	//continue
	return 'C';
}

void game()
{
    char board[ROW][COL]={0};
    int ret;
    InitBoard(board,ROW,COL);
    DisplayBoard(board,ROW,COL);
    while (1)
	{
		/*

			How does the game turn go?
			Please improve this function

		*/
		break;

	}
    printf("who is the winner?\n");
	/*

			How to tell players who is the winner?
			Please improve this function

	*/
    
}


int main()
{  
    int input ;
	char ch;
    do
    {  
        menu();
        printf("Enter your choice: ");
        scanf("%d",&input);
		ch = getchar();
        switch (input)
        {
        case 1:
            game();
            break;
        case 2:
            printf("EXIT\n");
            break;
        default:
            printf("ERROR INPUT!\n");
            break;
        }
    } while (input != 2);
    
    return 0;
}