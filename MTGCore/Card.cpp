
#include "Card.h"

Card::Card(std::string name)
{
	Clear();
	m_name = name;
}

Card::~Card()
{
	m_name.clear();
}

void Card::Clear()
{
	m_name.clear();
}

std::string Card::GetName()const
{
	return m_name;
}

void Card::SetName(const std::string name)
{
	m_name = name;
}

Card::Card(){m_name.clear();}