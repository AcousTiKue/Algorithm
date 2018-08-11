// [LINK] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2008, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-CELL S/W Support, SukJoon Oh
// Version: Experimental
// File: PalindromeMain.cpp

#include "../include/Palindrome.h"

// Compile command
// g++ -o palindrom_main_bin -std=c++14 ../include/Palindrome.h ../src/Palindrome.cpp PalindromeMain.cpp

int main() {
	
	std::string _T([]() -> std::string {std::string _T; std::cin >> _T; return _T;}());
	_jcode::Palindrome T_(_T);
	
	[&](std::map<int, std::string> __T) {
		
		for(int itor_ = 2; itor_ < 11; itor_++) 
			if(__T.at(itor_).compare("NIE"))
				std::cout << itor_ << " " << __T.at(itor_) << std::endl;
	
	}(T_.run());
	
	return 0;
};