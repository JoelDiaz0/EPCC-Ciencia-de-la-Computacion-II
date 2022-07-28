#pragma once
#include "WinFactory.h"

class WinButton : public WinFactory //CProductoA1
{
public:
	WinButton();
	~WinButton();
	string Draw() const override;
};



