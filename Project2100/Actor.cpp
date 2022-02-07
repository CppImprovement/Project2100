#include "Actor.h"
#include <iostream>

Actor::Actor(i32 position, const char* name) : Object(name)
{
  m_position = position;
}

void Actor::print()
{
	std::cout << "Actor named: " << m_name << '\n';
}

void Actor::move(i32 distance)
{
	m_position += distance;
}
