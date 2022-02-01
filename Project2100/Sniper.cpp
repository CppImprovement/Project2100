#include "Sniper.h"

Sniper::Sniper()
{
	m_damage = 100;
	m_max_ammo = 4;
}

void Sniper::fire()
{
	Weapon::fire();
}
