#include <iostream>
#include <string>

int main()
{
	std::string theString = "HI THIS IS BRAIN";
	std::string *thePointer = &theString;
	std::string &theRef = theString;

	std::cout << &theString << std::endl;
	std::cout << thePointer << std::endl;
	std::cout << &theString << std::endl;

	std::cout << theString << std::endl;
	std::cout << *thePointer << std::endl;
	std::cout << theString << std::endl;

	return (0);
}