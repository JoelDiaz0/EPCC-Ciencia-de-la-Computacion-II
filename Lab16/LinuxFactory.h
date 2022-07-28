#pragma once
#include <iostream>
using std::string;

class LinuxFactory //AbstractProductoC
{
public:
	LinuxFactory();
	virtual ~LinuxFactory();
	virtual string Draw() const = 0;
};



