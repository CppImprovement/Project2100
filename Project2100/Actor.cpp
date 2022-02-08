#include "Actor.h"
#include <iostream>

Actor::Actor(i32 position, const char* name) : Object(name)
{
  m_position = position;
}

void Actor::move(i32 distance)
{
	m_position += distance;
}
