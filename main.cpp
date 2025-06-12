#include <iostream>
#include <string>
#include "main.h"

void TicTacGrid()
{
	
	std::cout << " " << loc[0][0] << " | " << loc[0][1] << " |" << loc[0][2] << " " << '\n';
	std::cout << "___|___|___" << '\n';
	std::cout << " " << loc[1][0] << " | " << loc[1][1] << " |" << loc[1][2] << " " << '\n';
	std::cout << "___|___|___" << '\n';
	std::cout << " " << loc[2][0] << " | " << loc[2][1] << " |" << loc[2][2] << " " << '\n';
	std::cout << "   |   |  " << '\n';
}

void Player1Moves ( )
{
	std::cout << player1 << " what is your move: ";
	std::cin >> tokenX;
	if (tokenX == 1 && tokenO != 1 && loc[0][0] != 'O')
	{
		loc[0][0] = 'X';
	}
	if (tokenX == 2 && tokenO != 2 && loc[0][1] != 'O')
	{
		loc[0][1] = 'X';
	}
	if (tokenX == 3 && tokenO != 3 && loc[0][2] != 'O')
	{
		loc[0][2] = 'X';
	}
	if (tokenX == 4 && tokenO != 4 && loc[0][0] != 'O')
	{
		loc[1][0] = 'X';
	}
	if (tokenX == 5 && tokenO != 5 && loc[1][1] != 'O')
	{
		loc[1][1] = 'X';
	}
	if (tokenX == 6 && tokenO != 6 && loc[1][2] != 'O')
	{
		loc[1][2] = 'X';
	}
	if (tokenX == 7 && tokenO != 7 && loc[2][0] != 'O')
	{
		loc[2][0] = 'X';
	}
	if (tokenX == 8 && tokenO != 8 && loc[2][1] != 'O')
	{
		loc[2][1] = 'X';
	}
	if (tokenX == 9 && tokenO != 9 && loc[2][2] != 'O')
	{
		loc[2][2] = 'X';
	}
	else if (tokenX < 1 || tokenX > 9  || tokenX == tokenO)
	{
		std::cout << player1 << " Invaild input!! \n";

	}
	
	
}

void Player2Moves ( )
{
	std::cout << player2 << " what is your move: ";
	std::cin >> tokenO;
	if (tokenO == 1 && tokenX != 1 && loc[0][0] != 'X')
	{
		loc[0][0] = 'O';
	}
	if (tokenO == 2 && tokenX != 2 && loc[0][1] != 'X')
	{
		loc[0][1] = 'O';
	}
	if (tokenO == 3 && tokenX != 3 && loc[0][2] != 'X')
	{
		loc[0][2] = 'O';
	}
	if (tokenO == 4 && tokenX != 4 && loc[1][0] != 'X')
	{
		loc[1][0] = 'O';
	}
	if (tokenO == 5 && tokenX != 5 && loc[1][1] != 'X')
	{
		loc[1][1] = 'O';
	}
	if (tokenO == 6 && tokenX != 6 && loc[1][2] != 'X')
	{
		loc[1][2] = 'O';
	}
	if (tokenO == 7 && tokenX != 7 && loc[2][0] != 'X')
	{
		loc[2][0] = 'O';
	}
	if (tokenO == 8 && tokenX != 8 && loc[2][1] != 'X')
	{
		loc[2][1] = 'O';
	}
	if (tokenO == 9 && tokenX != 9 && loc[2][2] != 'X')
	{
		loc[2][2] = 'O';
	}
	else if (tokenO < 1 || tokenO > 9)
	{
		std::cout << player2 << " Invaild input!! \n";

	}
}

bool IsPlayer1Win ( )
{
	if (loc[0][0] == 'X' && loc[0][1] == 'X' && loc[0][2] == 'X')
	{
		win = true;
	}
	else if (loc[1][0] == 'X' && loc[1][1] == 'X' && loc[1][2] == 'X')
	{
		win = true;

	}
	else if (loc[2][0] == 'X' && loc[2][1] == 'X' && loc[2][2] == 'X')
	{
		win = true;

	}
	else if (loc[0][0] == 'X' && loc[1][0] == 'X' && loc[2][0] == 'X')
	{
		win = true;

	}
	else if (loc[0][1] == 'X' && loc[1][1] == 'X' && loc[2][1] == 'X')
	{
		win = true;

	}
	else if (loc[0][2] == 'X' && loc[1][2] == 'X' && loc[2][2] == 'X')
	{
		win = true;

	}
	else if (loc[0][0] == 'X' && loc[1][1] == 'X' && loc[2][2] == 'X')
	{
		win = true;

	}
	else if (loc[0][2] == 'X' && loc[1][1] == 'X' && loc[2][0] == 'X')
	{
		win = true;

	}
	 else
	{
		win = false;
	}
	 if (win)
	{
		std::cout << player1 << " has won!!\n";

	}
	return win;

}

bool IsPlayer2Win ( )
{
	if (loc[0][0] == 'O' && loc[0][1] == 'O' && loc[0][2] == 'O')
	{
		win = true;
	}
	else if (loc[1][0] == 'O' && loc[1][1] == 'O' && loc[1][2] == 'O')
	{
		win = true;

	}
	else if (loc[2][0] == 'O' && loc[2][1] == 'O' && loc[2][2] == 'O')
	{
		win = true;

	}
	else if (loc[0][0] == 'O' && loc[1][0] == 'O' && loc[2][0] == 'O')
	{
		win = true;

	}
	else if (loc[0][1] == 'O' && loc[1][1] == 'O' && loc[2][1] == 'O')
	{
		win = true;

	}
	else if (loc[0][2] == 'O' && loc[1][2] == 'O' && loc[2][2] == 'O')
	{
		win = true;

	}
	else if (loc[0][0] == 'O' && loc[1][1] == 'O' && loc[2][2] == 'O')
	{
		win = true;

	}
	else if (loc[0][2] == 'O' && loc[1][1] == 'O' && loc[2][0] == 'O')
	{
		win = true;

	}
	else
	{
		win = false;
	}
	if (win)
	{
		std::cout << player2 << " has won!!\n";

	}
	return win;
}

int main ( )
{
	std::cout << "Player 1 what is your name: ";
	std::cin >> player1;
	std::cout << player1 << " your are X \n";
	std::cout << "Player 2 what is your name: ";
	std::cin >> player2;
	std::cout << player2 << " your are O \n";

	TicTacGrid ( );
	
	while (true)
	{

	Player1Moves ( );
	TicTacGrid ( );
	IsPlayer1Win ( );

	Player2Moves ( );
	TicTacGrid ( );
	IsPlayer2Win ( );

	}
	
}