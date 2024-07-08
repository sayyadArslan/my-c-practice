#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void Board();
int checkwin();
char board[] ={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
	printf("----------------Wellcome In Tic-Tac-Toe Game----------\n");
	Board();
	int player=1,input,status=-1;
	while(status ==-1)
	{
		player=(player%2==0) ?2:1;
		char mark= ( player==1) ? 'x':'O';
		printf("Enter Number For Player %i\n",player);
		scanf("%d",&input);
		if(input<1 || input >9)
		{
			printf("Invalid Input");
		}	
		board[input] =mark;
		Board();
		int result =checkwin();
		if(result ==1)
		{
			printf("Winner");
			return 0;
		}
		player++;	
	}
	return 0;
}
void Board()
{

	printf("  %c |  %c  | %c \n",board[1],board[2],board[3]);	
	printf("____|_____|____\n");
	printf("  %c |  %c  | %c  \n",board[4],board[5],board[6]);	
	printf("____|_____|____\n");
	printf("  %c |  %c  | %c \n",board[7],board[8],board[9]);	
	printf("    |     |    \n");
}
int checkwin()
{
	if(board[1]==board[2] && board[3]==board[4])
	{
		return 1;
	}
	if(board[1]==board[4] && board[4]==board[7])
	{
		return 1;
	}
	if(board[7]==board[8] && board[8]==board[9])
	{
		return 1;
	}
	if(board[3]==board[6] && board[6]==board[9])
	{
		return 1;
	}
	if(board[1]==board[5] && board[5]==board[9])
	{
		return 1;
	}
	if(board[3]==board[5] && board[5]==board[7])
	{
		return 1;
	}
	if(board[2]==board[5] && board[5]==board[8])
	{
		return 1;
	}
	if(board[4]==board[5] && board[5]==board[6])
	{
		return 1;
	}
	int count=0;
	return -1;
	for(int i=1;i<9;i++)
	{
		if(board[i]=='x' || board[i]=='O')
		{
			count++;
		}
	}
}
