#pragma once
#include "Actor.h"

class Character : public Actor
{
protected: 
	i32 m_health = 100;

public: 
	Character();
	Character(i32 health, i32 position, char* name);
};
