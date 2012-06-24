
#pragma once

#include "Spell.h"
#include "NonSpell.h"

class CardHelper
{
public:
	static bool IsASpell(Card* card);
	static bool IsANonSpell(Card* card);
};