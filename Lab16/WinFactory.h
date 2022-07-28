#pragma once
#include <iostream>
using std::string;

class WinFactory  //AbstractProductoA
{
public:
	 WinFactory();
	 virtual ~WinFactory();
	 virtual string Draw() const = 0;
};



