

#include <iostream>
#include <vector>

#include "MTGInterface.h"

typedef  unsigned int uint;

int main(int argc, char** argv)
{
	std::vector<Card*> cards;

	cards.push_back(new Spell("woop", "artifact"));	
	cards.push_back(new Spell("woop2", "artifact2"));
	cards.push_back(new Spell("woop3", "artifact3"));	
	cards.push_back(new NonSpell);
	cards.push_back(new Spell("woop5", "artifact5"));



	_CM->AddCard(new Spell("woop5", "artifact5"));
	_CM->AddCard(new Spell("woop5", "artifact5"));
	if(_CM->RemoveCard(-1))
	{
		std::cout << "deleted" << std::endl;
	}
	else
	{
		std::cout << "Not deleted" << std::endl;
	}


	for(uint i = 0; i < (uint)cards.size(); ++i)
	{


		

		// to find whether abc_pointer is pointing to xyz type of object
		Spell* spell_ptr = dynamic_cast<Spell*>(cards[i]);

		std::cout << cards[i]->GetName() << std::endl;
 
		if (CardHelper::IsASpell(cards[i]))
		{
		std::cout << static_cast<Spell*>(cards[i])->GetSubType() << std::endl;
		}
		else
		{
		std::cout << static_cast<NonSpell*>(cards[i])->Random() << std::endl;
		}
	}

	system("pause");
	return 0;
}