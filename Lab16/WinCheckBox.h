#pragma once
#include "WinFactory.h"

class WinCheckBox : public WinFactory //CProductoA2
{
public:
	WinCheckBox();
	~WinCheckBox();
	string Draw() const override;
};



