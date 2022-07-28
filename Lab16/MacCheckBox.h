#pragma once
#include "MacFactory.h"

class MacCheckBox : public MacFactory //CProductoB2
{
public:
	MacCheckBox();
	~MacCheckBox();
	string Draw() const override;
	string draw(const WinFactory& colaborador) const override;
};



