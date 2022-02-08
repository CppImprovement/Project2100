#include "Character.h"
#include <iostream>

Character::Character() : Actor(0, "Unnamed Character")
{
}

Character::Character(i32 max_health, i32 position, const char* name) : Actor(position, name)
{
	m_max_health = max_health;
	m_health = max_health;
}


Character::Character(i32 max_health, i32 position, const char* name, bool player_respawn, i32 respawn_timer) : Actor(position, name)
{
	m_max_health = max_health;
	m_health = m_max_health;
	m_respawn_timer = respawn_timer;
	m_player_respawn = player_respawn;
}

void Character::die()
{
// 	if (m_health == 0)
// 	{
// 		m_player_respawn = true;
// 		if (m_player_respawn == true)
// 		{
// 			spawn();
// 			if (m_respawn_timer > 0; m_respawn_timer--)
// 			{
// 				std::cout << "You have died!\n";
// 				std::cout << "Respawning in: " << m_respawn_timer; 
// 				
// 			}
// 		}
// 	}
// 	m_player_respawn = false;
// 	spawn();
}

void Character::Pick_Up_Weapon()
{
	// Function to pick up second weapon, or drop current weapon if two rifle slots, or two pistol and one rifle slots are already used.
}

void Character::spawn()
{
	m_health = m_max_health;
}

void Character::print()
{
	std::cout << "Character named: " << m_name << '\n';
	std::cout << "Health: " << m_health << '\n';
	std::cout << "Position: " << m_position << "\n\n";
}
