#pragma once
#include <QRegExp>
#include <QString>
class ownValidator
{
	QRegExp *m_onlyChar;
	QRegExp *m_onlyInt;
	QRegExp *m_specialGBPLZ;

  public:
	ownValidator();
	~ownValidator();

	const bool validOnlyChar(const QString &input) const;
	const bool validOnlyInt(const QString &input) const;
	const bool validspecialGBPLZ(const QString &input) const;
};
