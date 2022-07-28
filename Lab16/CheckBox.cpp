#include "CheckBox.h"

CheckBox::CheckBox()
{
}

CheckBox::~CheckBox()
{
}

WinFactory* CheckBox::CrearControlW() const
{
	return new WinCheckBox();
}

MacFactory* CheckBox::CrearControlM() const
{
	return new MacCheckBox;
}

LinuxFactory* CheckBox::CrearControL() const
{
	return new LinuxCheckBox;
}
