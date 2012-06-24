


#pragma once

class Permanent
{
public:
	Permanent(bool tapped);
	bool IsTapped()const;
protected:

private:
	bool m_tapped;
};