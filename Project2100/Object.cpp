#include "Object.h"
#include <iostream>

Object::Object()
{
	m_name = "DefaultObjectName";
}

Object::Object(const char* name)
{
	m_name = name;
}
