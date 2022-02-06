#pragma once
#include "Character.h"

// A class for the Main Opponent in the game. 
class MainOpponent : public Character
{
protected: 

public:
	MainOpponent(i32 max_health, i32 position, const char* name);

	void print() override;
};
