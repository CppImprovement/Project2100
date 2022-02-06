#pragma once
#include "Actor.h"

class Weapon : public Actor
{
protected:
	i32 m_damage = 0;
	i32 m_max_ammo = 0;
	i32 m_ammo = 0;

public:
	Weapon() = default;
	Weapon(i32 position, const char* name);
	Weapon(i32 damage, i32 max_ammo, i32 position, const char* name);

	virtual void fire();
	virtual void reload();
	virtual void zoom();
	void print() override;
};
