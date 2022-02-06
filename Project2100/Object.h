#pragma once
#include "Types.h"
#include <iostream>

// Base Object Class
class Object 
{
protected: 
	const char* m_name;

public: 
	Object();
	Object(const char* name);
	virtual ~Object() = default;

	virtual void print();
};

