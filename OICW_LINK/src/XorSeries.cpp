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



// XorImproved
// Constructor
_jcode::XorSeriesImproved::XorSeriesImproved(const int& argrN_, std::list<BITSET>& argrSeriesA_) : N_(argrN_), SeriesA_(argrSeriesA_) {
#ifdef _DEBUG_ON_
	std::cout << "XorSeriesImproved::XorSeriesImproved()" << std::endl;
#endif
};


// Destructor
_jcode::XorSeriesImproved::~XorSeriesImproved() {
#ifdef _DEBUG_ON_
	std::cout << "XorSeriesImproved::~XorSeriesImproved()" << std::endl;
#endif	
	
	SeriesA_.clear();
};

const int _jcode::XorSeriesImproved::run() const { 
#ifdef _DEBUG_ON_
	std::cout << "XorSeriesImproved::run()" << std::endl;
#endif	
	// Algorithm idea first provided by Lee Tae_Kyun
	
	enum { ZERO, ONE, ZERO_ONE_PAIR, ONE_ZERO_PAIR, SUM };
	unsigned _count[5] = { 0, }; // Counters all set to zeros!!
	bool _flag = 0;
	
	std::list<BITSET> __T = this->SeriesA_;
	
	// Splitting original series into two groups.
	std::list<BITSET> _firstGroup;
	std::list<BITSET> _secondGroup;
	
#define BOUNDARY 1073741824
#define _DEBUG_ON_
	
	
	for(int _itor = 30; _itor != -1; --_itor) { // Loops the bits.
		
#ifdef _DEBUG_ON_
		std::cout << "	> Loop : _itor(" << _itor << ")" << std::endl;		
#endif
		
		for(auto ListItor_ = __T.begin(); ListItor_ != __T.end(); ListItor_++) { // Loops the series
			
			// Link the second group right behind of the first group after setting the boundary,
			// then clear the existing data in second group,
			// since the sorting(grouping) process should move on maintaining relative positions.
			
			if(ListItor_->to_ulong() == BOUNDARY) { // if boundary, 

				_firstGroup.push_back(BITSET(BOUNDARY));

				if(!_secondGroup.empty())
					_secondGroup.push_back(BITSET(BOUNDARY));

				_firstGroup.splice(_firstGroup.end(), _secondGroup);
				_secondGroup.clear();

				// reset counter!!
				_count[ONE] = _count[ZERO]  = 0;

				continue;	
			
			} else {
			
				// Scan the largest bit
				if(ListItor_->operator[](_itor)) { // When the first bit is zero, 
					
					_firstGroup.push_back(BITSET(ListItor_->to_string())); // push to the first list
					
					_count[ONE_ZERO_PAIR] += _count[ONE];
					
					_flag = 0; // reset the bit
					_count[ZERO]++;
					
				} else { // if one
					
					_secondGroup.push_back(BITSET(ListItor_->to_string())); // push to the second list
					
					_count[ZERO_ONE_PAIR] += _count[ZERO];
					_flag = 1; // set the bit
					
					_count[ONE]++;
				}				
			}
		}
		
		// Accumulating values
		_count[SUM] += std::max(_count[ZERO_ONE_PAIR], _count[ONE_ZERO_PAIR]);
		
		// Should maintain the status, thus __T should have sorted list by group.
		// First set the boundary, link it with second group, move to __T, clear each groups.
		// Operations below explains the process.
		
		if(!_secondGroup.empty()) {
				
			_firstGroup.push_back(BITSET(BOUNDARY));
			_firstGroup.splice(_firstGroup.end(), _secondGroup);
			
		} else
			;
		
		// Move
		__T.clear();
		__T = _firstGroup;
		
		// Clearing
		_firstGroup.clear();
		_secondGroup.clear();
		
		// reset counters!!
		_count[ONE] = _count[ZERO] = _count[ONE_ZERO_PAIR] = _count[ZERO_ONE_PAIR] = 0;
		
	}
	
	return _count[SUM];
};

