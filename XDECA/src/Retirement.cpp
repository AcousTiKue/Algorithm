// [XDECA] Algorithm Study
// Environment: Ubuntu 14 LTS, g++ 5.5.0, gcc 5.5.0
// Author: Air Force Operations Information & Communication Wing, KTMO-CELL S/W Support, SukJoon Oh
// Version: Experimental
// File: Retirement.cpp



#define _RELATIVE_

#ifdef _RELATIVE_

#include "./include/Retirement.h"
#else

#include "Retirement.h"
#endif



#define _DEBUG_ON_
// Constructor
_jcode::Retirement::Retirement(std::vector<int>& argrTime_, std::vector<int>& argrPay_) : Time_(argrTime_), Pay_(argrPay_) {
#ifdef _DEBUG_ON_
	std::cout << "Retirement::Retirement()" << std::endl;	
#endif
	
	// Make some graph!!!
	this->Days_ = argrTime_.size();
	
	for(int itor_ = 0; itor_ < Days_; itor_++)
		Graph_.push_back(Days_ - 1 - argrTime_.at(itor_));
};


// Destructor
_jcode::Retirement::~Retirement() {
#ifdef _DEBUG_ON_
	std::cout << "Retirement::~Retirement()" << std::endl;	
#endif
};
	

// Interface
// Latest update 18.08.12.
const int _jcode::Retirement::run() const {
#ifdef _DEBUG_ON_
	std::cout << "Retirement::run()" << std::endl;	
#endif	
	
	for(int itor_ = 0; itor_ < Days_; itor_++) {
		
		
	}
};







