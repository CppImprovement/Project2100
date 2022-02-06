#include "Weapon.h"
#include <iostream>

Weapon::Weapon(i32 position, const char* name) : Actor(position, name)
{
	m_ammo = m_max_ammo;
}

Weapon::Weapon(i32 damage, i32 max_ammo, i32 position, const char* name) : Actor(position, name)
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

void Weapon::zoom()
{
	// Sets zoom
}

void Weapon::print()
{
	std::cout << "Weapon Type: " << m_name << '\n';
	std::cout << "Damage: " << m_damage << '\n';
	std::cout << "Ammo: " << m_ammo << '\n';
}
