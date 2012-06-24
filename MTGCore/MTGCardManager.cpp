

#include "MTGCardManager.h"

typedef unsigned int uint;

MTGCardManager* MTGCardManager::_instance = NULL;
std::vector<Card*>* MTGCardManager::m_cards = NULL;

MTGCardManager* MTGCardManager::_Instance()
{
	if(_instance == NULL)
	{
		_instance = new MTGCardManager();
	}

	return _instance;
}

MTGCardManager::~MTGCardManager()
{
	_instance = NULL;
	m_cards = NULL;

	delete _instance;
	delete m_cards;
}

void MTGCardManager::AddCard(Card* card)
{
	m_cards->push_back(card);
}

bool const MTGCardManager::RemoveCard(const int i)
{
	if(i >= 0 && i < (uint)m_cards->size())
	{
		m_cards->erase(m_cards->begin() + i);
		return true;
	}

	return false;
}

MTGCardManager::MTGCardManager()
{
	m_cards = new std::vector<Card*>();
}