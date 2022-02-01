#pragma once
#include "Object.h"

class Actor : public Object
{
protected:
	i32 m_position = 0;

public:
	Actor() = default;
	Actor(i32 position, char* name);

	void print() override;
};
