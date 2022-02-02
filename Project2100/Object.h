#pragma once
#include "Types.h"
#include <iostream>


// Base Object Class
class Object 
{
protected: 
	char* m_name;

public: 
	Object();
	Object(char* name);
	virtual ~Object() = default;

	virtual void print();
};

