#pragma once
#include "GUIFactory.h"

class CheckBox : public GUIFactory //CFactory2
{
public:
	CheckBox();
	~CheckBox();

	WinFactory* CrearControlW() const override;
	MacFactory* CrearControlM() const override;
	LinuxFactory* CrearControL() const override;
};



