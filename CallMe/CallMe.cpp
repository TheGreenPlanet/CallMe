#include <iostream>
#include <string>

// include the header
#include <CallMe.h>


void PrintStr(const char *str)
{
	std::cout << str << std::endl;
}

int main()
{

	CallMe<void>((DWORD)&PrintStr, "Hello, World!");


	std::cin.get();
}

