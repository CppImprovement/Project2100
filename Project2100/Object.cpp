#include "Object.h"

Object::Object()
{
	// m_name = "DefaultObjectName";
	m_name = name;
}

Object::Object(char* name)
{
	m_name = name;
}

void Object::print()
{
	std::cout << "Object named: " << m_name << '\n';
}
