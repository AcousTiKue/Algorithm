// [Link] Algorithm Study
// Environment: Ubuntu LTS 14
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: commonMain.cpp

#include "LineCounter.h"

#include <iostream>

// g++ -o LineCounterBin LineCounter.h LineCounter.cpp commonMain.cpp

int main(int argc, char* argv[]) {
	
	if(argc == 1) {
		std::cout << "File argument necessary." << std::endl;	
		
		return -1;
	}
	
	std::string __T = "";
	
	_jcode::LineCounter _T(__T);
	
	for(register int itor_ = 1; itor_ <= argc - 1; itor_++) {
		
		_T.setFileName(argv[itor_]);
		
		std::cout << _T.getFileName() << ": "<< _T.countLines() << std::endl;
		
		_T.resetCounter();
	}
	
	
	
	return 0;
};


