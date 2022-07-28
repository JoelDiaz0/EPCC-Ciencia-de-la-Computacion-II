#include "Button.h"

Button::Button()
{
}

Button::~Button()
{
}

WinFactory* Button::CrearControlW() const
{
	return new WinButton();
}

MacFactory* Button::CrearControlM() const
{
	return new MacButton();
}

LinuxFactory* Button::CrearControL() const
{
	return new LinuxButton;
}
