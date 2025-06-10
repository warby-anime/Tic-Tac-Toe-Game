#include <iostream>
#include <string>

void TicTacGrid()
{
	constexpr int TicTacCows{ 3 };
	constexpr int TicTacRols{ 3 };
	char loc[TicTacCows][TicTacRols]
	{ { '1' , '2' , '3'},
	  { '4' , '5' , '6'},
	  { '7' , '8' , '9'}
	};

	std::cout << " " << loc[0][0] << " | " << loc[0][1] << " |" << loc[0][2] << " " << '\n';
	std::cout << "___|___|___" << '\n';
	std::cout << " " << loc[1][0] << " | " << loc[1][1] << " |" << loc[1][2] << " " << '\n';
	std::cout << "___|___|___" << '\n';
	std::cout << " " << loc[2][0] << " | " << loc[2][1] << " |" << loc[2][2] << " " << '\n';
	std::cout << "   |   |  " << '\n';
}

int main ( )
{
	TicTacGrid ( );


}