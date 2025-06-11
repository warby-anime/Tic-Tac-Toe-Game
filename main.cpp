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
	if (tokenX == 1)
	{
		loc[0][0] = 'X';
	}
	if (tokenX == 2)
	{
		loc[0][1] = 'X';
	}
	if (tokenX == 3)
	{
		loc[0][2] = 'X';
	}
	if (tokenX == 4)
	{
		loc[1][0] = 'X';
	}
	if (tokenX == 5)
	{
		loc[1][1] = 'X';
	}
	if (tokenX == 6)
	{
		loc[1][2] = 'X';
	}
	if (tokenX == 7)
	{
		loc[2][0] = 'X';
	}
	if (tokenX == 8)
	{
		loc[2][1] = 'X';
	}
	if (tokenX == 9)
	{
		loc[2][2] = 'X';
	}
}

void Player2Moves ( )
{
	std::cout << player2 << " what is your move: ";
	std::cin >> tokenO;
	if (tokenO == 1)
	{
		loc[0][0] = 'O';
	}
	if (tokenO == 2)
	{
		loc[0][1] = 'O';
	}
	if (tokenO == 3)
	{
		loc[0][2] = 'O';
	}
	if (tokenO == 4)
	{
		loc[1][0] = 'O';
	}
	if (tokenO == 5)
	{
		loc[1][1] = 'O';
	}
	if (tokenO == 6)
	{
		loc[1][2] = 'O';
	}
	if (tokenO == 7)
	{
		loc[2][0] = 'O';
	}
	if (tokenO == 8)
	{
		loc[2][1] = 'O';
	}
	if (tokenO == 9)
	{
		loc[2][2] = 'O';
	}
}

bool IsWin ( )
{
	if (loc[0][0] && loc[0][1] && loc[0][2] == 'X' ||
		loc[1][0] && loc[1][1] && loc[1][2] == 'X' ||
		loc[2][0] && loc[2][1] && loc[2][2] == 'X' ||
		loc[0][0] && loc[1][0] && loc[2][0] == 'X' ||
		loc[0][1] && loc[1][1] && loc[2][1] == 'X' ||
		loc[0][2] && loc[1][2] && loc[2][2] == 'X')
	{
		std::cout << player1 << " has won!!\n";
		return true;
	}
	return false;
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
	
	while (!IsWin())
	{

	Player1Moves ( );
	TicTacGrid ( );

	IsWin ( );

	Player2Moves ( );
	TicTacGrid ( );
	}
	
}