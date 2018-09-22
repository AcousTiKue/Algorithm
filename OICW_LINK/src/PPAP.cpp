// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: PPAP.cpp


// #include <string>

#define _RELATIVE

#ifdef _RELATIVE
#include "../include/PPAP.h"

#elif

#include "PPAP.h"

#endif

#define _LINUX


// Constructor
_jcode::PPAP::PPAP(const std::string& argrUserInput_) : UserInput_(argrUserInput_) {
	
	Result_[P_ABLE] = "PPAP";
	Result_[P_UNABLE] = "NP";
};


// Destructor
_jcode::PPAP::~PPAP() {
	
	// Nothing in this scope
};



// Core
const std::string _jcode::PPAP::core() const {
	
	std::regex Pattern_("PPAP");
	
	std::string _T = UserInput_;
	std::string _preT = UserInput_;
	
	// std::regex
	while( (_T = std::regex_replace(_T, Pattern_, "P")).compare(_preT) ) 
		_preT = _T;
	
		// Parameter should be set to (source string, regex pattern, target string).
	
	return _T;
};





// Interface
const std::string _jcode::PPAP::run() const {
	
	if(!core().compare("P"))
		return Result_[P_ABLE];
	
	else
		return Result_[P_UNABLE];
};
