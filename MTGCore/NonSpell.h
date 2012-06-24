

#pragma once

#include "Card.h"

class NonSpell : public Card
{
public:
	NonSpell(){m_name = "Booya";}
	virtual ~NonSpell(){}
	float Random(){return 10.43243f;}
protected:

private:
};