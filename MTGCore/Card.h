

#pragma once

#include <string>

class Card
{
public:
	
	virtual ~Card()=0;
	std::string GetName() const;
protected:
	Card(std::string name);
	Card();
	void SetName(const std::string name);
	void Clear();
	std::string m_name;
private:
	

	
};