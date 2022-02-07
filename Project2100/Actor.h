#pragma once
#include "Object.h"

class Actor : public Object
{
protected:
	i32 m_position = 0;
	i32 m_move_speed = 1;
	
public:
	Actor() = default;
	Actor(i32 position, const char* name);

	void print() override;

	virtual void move(i32 distance);
};
