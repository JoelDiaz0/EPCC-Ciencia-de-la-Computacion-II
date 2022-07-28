#include "MacButton.h"

MacButton::MacButton()
{
}

MacButton::~MacButton()
{
}

string MacButton::Draw() const
{
	return "Dibujando Button con MacOs";
}

string MacButton::draw(const WinFactory& colaborador) const
{
	return "MacOs con ayuda de " + colaborador.Draw();
}
