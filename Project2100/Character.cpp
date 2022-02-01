#include "Character.h"

Character::Character(i32 health, i32 position, char* name) : Actor(position, name)
{
	m_health = health;
}
