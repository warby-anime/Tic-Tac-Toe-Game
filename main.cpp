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

void PlayerMoves ( )
{
	std::cout << player1 << " what is your move: ";
	std::cin >> tokenX;
	TicTacGrid ( );
	std::cout << player2 << " what is your move: ";
	std::cin >> tokenO;
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
	
	PlayerMoves ( );

	if (tokenX == 1)
	{
		loc[0][0] = 'X';
	}
	if (tokenO == 1)
	{
		loc[0][0] = 'O';

	}


	TicTacGrid ( );
}