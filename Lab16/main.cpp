#include <iostream>
#include "GUIFactory.h"
#include "Button.h"
#include "CheckBox.h"

using std::cout;
using std::endl;


void Aplication (const GUIFactory& f, char OS)
{
	OS = towlower(OS);

	switch (OS)
	{
	case 'w': {
		const WinFactory* producto_w = f.CrearControlW();
		cout << producto_w->Draw() << "\n";
		delete producto_w;
		break;
	}
	case 'm': {
		const MacFactory* producto_m = f.CrearControlM();
		cout << producto_m->Draw() << "\n";
		delete producto_m;
		break;
	}
	case 'l': {
		const LinuxFactory* producto_l = f.CrearControL();
		cout << producto_l->Draw() << "\n";
		delete producto_l;
		break;
	}
	default:
		throw std::logic_error("VALOR INVALIDO");
	}	
}

int main()
{ 
	Button* boton1 = new Button;
	CheckBox* box1 = new CheckBox;
	CheckBox* box2 = new CheckBox;

	try
	{
		cout << "Cliente Windows\n";
		Aplication(*boton1, 'w');// 'w' crear objeto con Windows
		cout << "Cliente MacOS\n";
		Aplication(*box1, 'm');  // 'm' crear objeto con MacOS
		cout << "CLiente Linux\n";
		Aplication(*box2, 'l');  // 'l' crear objeto con Linux
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
		delete boton1, box1, box2;
		return -1;
	}

	delete boton1, box1, box2;
	return 0;
}

