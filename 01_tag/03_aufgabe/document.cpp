#include "document.h"

Document::Document(const QString &text) : m_text(text) {};

void Document::setText(QString text) {
	m_text = text;

	Q_EMIT(textChanged(m_text));
}