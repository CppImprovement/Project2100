#pragma once
#include "Weapon.h"

// The class for the sniper rifle in 2100
class Sniper : public Weapon
{
public:
	Sniper();
	Sniper(i32 damage, i32 ammo, i32 max_ammo);

	void fire() override;
};