#include "Actor.h"
#include <iostream>

Actor::Actor(i32 position, char* name) : Object(name)
{
  m_position = position;
  m_name = name;
}

void Actor::print()
{
	std::cout << m_name;
}

i32 Actor::Move_Forward()
{
	m_position++;
}

i32 Actor::Move_Backwards()
{
	m_position--;
}

