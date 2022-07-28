#pragma once
#include "GUIFactory.h"

class Button : public GUIFactory //CFactory1
{
public:
	Button();
	~Button();

	WinFactory* CrearControlW() const override;
	MacFactory* CrearControlM() const override;
	LinuxFactory* CrearControL() const override;
};



