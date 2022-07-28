#pragma once
#include "MacFactory.h"

class MacButton : public MacFactory //CProductoB1
{
public:
	MacButton();
	~MacButton();
	string Draw() const override;
	string draw(const WinFactory& colaborador) const override;
};



