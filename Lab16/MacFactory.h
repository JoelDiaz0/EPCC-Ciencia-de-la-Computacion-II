#pragma once
#include "WinFactory.h"
using std::string;

class MacFactory //AbstractProductoB
{
public:
	MacFactory();
	~MacFactory();
	virtual string Draw() const = 0;
	virtual string draw(const WinFactory& colaborador) const = 0;
};



