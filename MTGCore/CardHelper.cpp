
#include "CardHelper.h"

bool CardHelper::IsASpell(Card* card)
{
	Spell* comparer = dynamic_cast<Spell*>(card);

	return (comparer == NULL)? false : true;
}

bool CardHelper::IsANonSpell(Card* card)
{
	NonSpell* comparer = dynamic_cast<NonSpell*>(card);

	return (comparer == NULL)? false : true;
}