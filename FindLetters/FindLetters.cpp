#include <iostream>
#include "Windows.h"
#include <string> 

int main()
{

	std::string userinput;
	std::string finduserinput;
	
	std::cout << "Input first string ";
	std::getline(std::cin, userinput);
	std::cout << "Input second string ";
    std::getline(std::cin, finduserinput);


	HINSTANCE load;

	load = LoadLibrary(L"DynamicLib.dll");
	typedef bool (*find) (std::string, std::string);
	find Find;
	Find = (find)GetProcAddress(load, "Find");
	if (Find(finduserinput, userinput)) {
		std::cout << "Found" << std::endl;
	}
	else {
		std::cout << "Not found" << std::endl;
	}
	FreeLibrary(load);

}

