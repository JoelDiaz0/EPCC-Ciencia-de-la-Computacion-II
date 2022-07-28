#pragma once
#include "LinuxFactory.h"
class LinuxButton : public LinuxFactory //CProductoB1
{ 
public:
	LinuxButton();
	~LinuxButton();
	string Draw() const override;
};


