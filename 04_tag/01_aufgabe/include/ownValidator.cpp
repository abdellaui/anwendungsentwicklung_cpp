#include "ownValidator.h"

ownValidator::ownValidator()
{
	m_onlyChar = new QRegExp("^[a-zA-Z]+$");
	m_onlyInt = new QRegExp("^[0-9]+$");
	m_specialGBPLZ = new QRegExp("^(([a-zA-Z][0-9] [0-9][a-zA-Z]{2})|([a-zA-Z][0-9]{2} [0-9][a-zA-Z]{2})|([a-zA-Z][0-9][a-zA-Z] [0-9][a-zA-Z]{2})|([a-zA-Z]{2}[0-9] [0-9][a-zA-Z]{2})|([a-zA-Z]{2}[0-9]{2} [0-9][a-zA-Z]{2})|([a-zA-Z]{2}[0-9][a-zA-Z] [0-9][a-zA-Z]{2}))$");
}

ownValidator::~ownValidator()
{
	delete m_onlyChar;
	delete m_onlyInt;
	delete m_specialGBPLZ;
}

const bool ownValidator::validOnlyChar(const QString &input) const
{
	return input.contains(*m_onlyChar);
}
const bool ownValidator::validOnlyInt(const QString &input) const
{
	return input.contains(*m_onlyInt);
}

const bool ownValidator::validspecialGBPLZ(const QString &input) const
{
	return input.contains(*m_specialGBPLZ);
}
