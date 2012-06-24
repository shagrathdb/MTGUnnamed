

#pragma once

#include "Card.h"

class Spell : public Card
{
public:
	Spell(std::string name, std::string subType);
	virtual ~Spell();

	std::string GetSubType()const;
protected:
	
private:
	std::string m_subType;

	Spell();
};