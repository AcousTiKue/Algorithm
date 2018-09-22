#include <iostream>
// #include <string>

#include "../include/PPAP.h"

//#include "../include/Palindrome.h"

// g++ -o ppap_bin -std=c++14 PPAP_Main.cpp ../include/PPAP.h ../src/PPAP.cpp

int main() {
	
	std::cout << "Successfully compiled!!" << std::endl;

	_jcode::PPAP _T([]() -> std::string { std::string _T; std::cin >> _T; return _T; }());
	
	std::cout << _T.run() << std::endl;
	
	return 0;
};