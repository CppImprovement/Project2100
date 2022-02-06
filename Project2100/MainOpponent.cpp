#include "MainOpponent.h"

MainOpponent::MainOpponent(i32 max_health, i32 position, const char* name) : Character(max_health, position, name)
{
}

void MainOpponent::print()
{
	std::cout << "Main Opponent name: " << m_name << '\n';
	std::cout << m_name << "'s health: " << m_health << '\n';
	std::cout << m_name << "'s position: " << m_position << '\n';
}
