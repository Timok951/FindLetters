#include <iostream>
#include "../DynamicLib/Header.h"
#include "Windows.h"


int main()
{

	HINSTANCE load;

	load = LoadLibrary(L"DynamicLib.dll");
	typedef int (*sum) (int, int);
	sum Sum;
	Sum = (sum)GetProcAddress(load, "Sum");
	std::cout << Sum(2, 5);
	FreeLibrary(load);

}

