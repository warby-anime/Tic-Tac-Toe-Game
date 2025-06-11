#pragma once



void TicTacGrid ( );
void Player1Moves ( );
void Player2Moves ( );
bool IsWin ( );

constexpr int TicTacCows{ 3 };
constexpr int TicTacRols{ 3 };
char loc[TicTacCows][TicTacRols]
{ { '1' , '2' , '3'},
  { '4' , '5' , '6'},
  { '7' , '8' , '9'}
};
std::string player1;
std::string player2;

int tokenX{};
int tokenO{};
bool Win { false };