#include "MainCharacter.h"

MainCharacter::MainCharacter(i32 max_health, i32 position, const char* name) : Character(max_health, position, name)
{
}

void MainCharacter::print()
{
	std::cout << "Main Character: " << m_name << '\n';
	std::cout << "Health: " << m_health << '\n';
	std::cout << "Position: " << m_position << "\n\n";
}
