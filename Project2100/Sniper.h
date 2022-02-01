#pragma once
#include "Weapon.h"

// The class for the sniper rifle in 2100
class Sniper : public Weapon
{

public:
	void fire() override;
};