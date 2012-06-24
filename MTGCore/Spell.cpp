
#include "Spell.h"

Spell::Spell(std::string name, std::string subType)
{
	m_name = name;
	m_subType = subType;
}

Spell::~Spell()
{

}

std::string Spell::GetSubType()const
{
	return m_subType;
}