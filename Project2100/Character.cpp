#include "Character.h"
#include <iostream>





Character::Character(i32 health, i32 position, char* name, bool player_respawn, i32 respawn_timer) : Actor(position, name)
{
	m_health = health;
	m_respawn_timer = respawn_timer;
	m_player_respawn = player_respawn;
}



i32 Character::Player_Dead()
{
	if (m_health == 0)
	{
		bool m_player_respawn = true;
		if (m_player_respawn == true)
		{
			if (m_respawn_timer > 0; m_respawn_timer--)
			{
				std::cout << "You have died!\n";
				std::cout << "Respawning in: " << m_respawn_timer; 
				
			}
		}
	}
	bool Player_Respawn = false;
}

i32 Character::Player_Respawn()
{
	bool player_respawn = false;
}