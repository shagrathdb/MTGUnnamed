
#include "Permanent.h"

Permanent::Permanent(bool tapped)
{
	m_tapped = tapped;
}

bool Permanent::IsTapped()const
{
	return m_tapped;
}