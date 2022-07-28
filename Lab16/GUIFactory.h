#pragma once
#include "LinuxButton.h"
#include "LinuxCheckBox.h"
#include "MacButton.h"
#include "MacCheckBox.h"
#include "WinButton.h"
#include "WinCheckBox.h"

class GUIFactory //AbstractFactory
{ 
public:
	GUIFactory();
	~GUIFactory();
	virtual WinFactory* CrearControlW() const = 0;
	virtual MacFactory* CrearControlM() const = 0;
	virtual LinuxFactory* CrearControL() const = 0;
};



