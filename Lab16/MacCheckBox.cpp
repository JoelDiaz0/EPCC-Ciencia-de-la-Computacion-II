#include "MacCheckBox.h"

MacCheckBox::MacCheckBox()
{
}

MacCheckBox::~MacCheckBox()
{
}

string MacCheckBox::Draw() const
{
	return "Dibujando CheckBox con MacOs";
}

string MacCheckBox::draw(const WinFactory& colaborador) const
{
	return "MacOs con ayuda de " + colaborador.Draw();
}
