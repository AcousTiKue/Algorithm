// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: XorSeries.cpp

#define _RELATIVE

#ifdef _RELATIVE
#include "../include/XorSeries.h"

#elif

#include "XorSeries.h"

#endif

#define _LINUX

// Constructor
_jcode::XorSeries::XorSeries(const int& argrN_, std::vector<int>& argrSeriesA_) : N_(argrN_), SeriesA_(argrSeriesA_) {
#ifdef _DEBUG_ON_
	std::cout << "XorSeries::XorSeries()" << std::endl;
#endif
};


// Destructor
_jcode::XorSeries::~XorSeries() {
#ifdef _DEBUG_ON_
	std::cout << "XorSeries::~XorSeries()" << std::endl;
#endif	
	
	SeriesA_.clear();
};



// Interface
const int _jcode::XorSeries::run() const {
#ifdef _DEBUG_ON_
	std::cout << "XorSeries::run()" << std::endl;
#endif
	
	// Local
	int Counter_ = 0;
	std::deque<int> SeriesC_;
	
	
	int _T = 0;
	
	for(int itorB_ = 0; itorB_ < this->N_; itorB_++) {
		
#ifdef __CXX14
		for(auto& itor_ : SeriesA_) // for-range-declaration
			// setting local seriesC_ the results.
			SeriesC_.push_back(itor_ ^ itorB_);
		
		while(SeriesC_.empty()) 
			
			for(auto& itor_ : SeriesC_) // for-range-declaration
				if(*SeriesC_.begin() < itor_)
					_T++;
#elif defined(__CXX11)
		for(auto itor_ = SerieA_.begin(); itor_ != SeriesA_.end(); itor_++) 
			// setting local seriesC_ the results.
			SeriesC_.push_back(*itor_ ^ itorB_);
			
#ifdef _DEBUG_ON_
		std::cout << "	> push_back() : " << SeriesC_.size() << std::endl;	
#endif
		while(SeriesC_.empty()) 
			
			for(auto itorC_ = ++SeriesC_.begin(); itorC_ != SeriesC_.end(); itorC_++) // for-range-declaration
				if(*SeriesC_.begin() < *itor_)
					++_T;

#endif
		
		SeriesC_.pop_front();
		
#ifdef _DEBUG_ON_
		std::cout << "	> _T : " << _T << std::endl;	
		std::cout << "	> pop_front() : " << SeriesC_.size() << std::endl;	
#endif		
		if(_T > Counter_)
			Counter_ = _T;
		
		SeriesC_.clear();
	}
	
	return Counter_;
};


