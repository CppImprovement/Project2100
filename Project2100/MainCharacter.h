#pragma once
#include "Character.h"

// The class for the main character in 2100.
class MainCharacter : public Character
{
protected:
	
public: 
	MainCharacter() = default;
	MainCharacter(i32 max_health, i32 position, const char* name);

	void print() override;
};
