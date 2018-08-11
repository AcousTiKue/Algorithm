// [LINK] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2008, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-CELL S/W Support, SukJoon Oh
// Version: Experimental
// File: XorSeriesMain.cpp

#include "../include/XorSeries.h"

// Compile command
// g++ -o palindrom_main_bin -std=c++14 ../include/Palindrome.h ../src/Palindrome.cpp PalindromeMain.cpp

int main() {
	
	_jcode::XorSeries __T(
		[]() -> const int {
			
			int N_;
			
			std::cin >> N_;
			
			return N_;		
		}(), 
		
		[]() -> std::vector<int> {
			
			int _T, N_ = 0;
			
			std::vector<int> __T;
			
			std::cin >> N_;
			
			for(int i = 0; i < N_; i++) {
				
				std::cin >> _T;
				__T.push_back(_T);
			}
			
			return __T;
		}()
	);
	
	std::cout << __T.run();
	
	
	return 0;
};