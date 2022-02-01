#include "Object.h"

Object::Object()
{
	m_name = "DefaultObjectName";
}

Object::Object(char* name)
{
	m_name = name;
}

void Object::print()
{
	std::cout << "Object named: " << m_name << '\n';
}
