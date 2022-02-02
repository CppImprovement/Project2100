#include "Weapon.h"
#include <iostream>

Weapon::Weapon(i32 position, char* name) : Actor(position, name)
{
	m_ammo = m_max_ammo;
}

Weapon::Weapon(i32 damage, i32 max_ammo, i32 position, char* name) : Actor(position, name)
{
	m_damage = damage;
	m_max_ammo = max_ammo;
	m_ammo = m_max_ammo;
}

void Weapon::fire()
{
	--m_ammo;
}

void Weapon::reload()
{
	m_ammo = m_max_ammo;
}

void Weapon::print_damage()
{
	std::cout << m_damage;
}

void Weapon::print_ammo()
{
	std::cout << m_ammo;
}
void Weapon::zoom_in_1()
{
// Zooms in 1.5x with the sniper rifle.


}

void Weapon::zoom_in_2()
{
	// Zooms in 3.0x with the sniper rifle. 
}