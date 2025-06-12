#pragma once



void TicTacGrid ( );
void Player1Moves ( );
void Player2Moves ( );
void IsPlayer1Win ( );
void IsPlayer2Win ( );

static constexpr int Col = 3 ;
static constexpr int Row = 3 ;
char loc[3][3]
{ { '1' , '2' , '3'},
  { '4' , '5' , '6'},
  { '7' , '8' , '9'}
};
std::string player1;
std::string player2;

int tokenX{};
int tokenO{};
int tiecount = 0;
bool win { false };
bool tie { false };