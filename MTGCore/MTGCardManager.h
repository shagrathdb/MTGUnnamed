

#pragma once

#include <iostream>
#include <vector>

class Card;

class MTGCardManager
{
public:
	static MTGCardManager* _Instance();

	static void AddCard(Card* card);

	static bool const RemoveCard(const int i);

	~MTGCardManager();

private:
	MTGCardManager();

	static MTGCardManager* _instance;

	static std::vector<Card*>* m_cards;
};