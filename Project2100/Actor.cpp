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
