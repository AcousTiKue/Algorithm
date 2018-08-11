// [LINK] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2008, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-CELL S/W Support, SukJoon Oh
// Version: Experimental
// File: Palindrome.cpp

#define _DEBUG_ON_
#define __CXX11

#define _VS2010_PLATFORM_
#define _WIDNOWS_

#define _RELATIVE_

#ifdef _RELATIVE_

#include "../include/Palindrome.h"
#else

#include "Palindrome.h"
#endif

/* Class Palindrome */
// Constructor
_jcode::Palindrome::Palindrome(std::string& argrTarget_) : String_(argrTarget_) {
	
	std::string Mark_("0123456789");
	
	for(register unsigned itor_ = 2; itor_ <= 10; itor_++) {
		
		try {
			
			IntegerToString_Lib_.insert( // Inserting into map.
				std::make_pair<int, std::string>(itor_, // Key as integer, value as std::string
					[&](int argBase_) -> std::string {
						
						// Convert it into unsigned long long type.
						unsigned long long _T = std::stoull(argrTarget_);
						std::string T_(""); // This is where return value will be stored.
						
						for(;_T > 0;) {
							
							T_ += Mark_.at(_T % argBase_);
								// Lambda captured Mark_ as reference.
								// Add one-length string to the end.
							_T /= argBase_;
						}
						
						std::reverse(T_.begin(), T_.end()); // Reverse the string.
						
						return T_;
					}(itor_)
				)
			);
			
#ifdef _DEBUG_ON_
			std::cout << IntegerToString_Lib_.at(itor_) << std::endl;
#endif
		} catch(std::exception& argrException_) {
#ifdef _DEBUG_ON_
			std::cout << std::string(argrException_.what()) + " at key(" << itor_ << ")" << std::endl;
#endif			
			IntegerToString_Lib_.insert(std::make_pair<int, std::string>(itor_, std::string("NIE")));
		}
	}
};


// Destructor
_jcode::Palindrome::~Palindrome() {
	
};


// Interface
std::map<int, std::string> _jcode::Palindrome::run() const {
	
	std::string Ord_, reverse_Ord_;
	
	for(register unsigned itor_ = 2; itor_ <= 10; itor_++) {
		// Key as base, from 2 to 10
		
		Ord_ = IntegerToString_Lib_.at(itor_).substr(0, IntegerToString_Lib_.at(itor_).size() / 2);
		// Parse it in first half.
		reverse_Ord_ = IntegerToString_Lib_.at(itor_).substr(IntegerToString_Lib_.at(itor_).size());
		// Parse the rest.
		
#ifdef _DEBUG_ON_
		std::cout << "Original " << IntegerToString_Lib_.at(itor_) << std::endl;
		std::cout << Ord_ << ", " << reverse_Ord_ << std::endl;
#endif
		
		auto Itor_ = Ord_.begin(); // Iterator begins in the right order.
		auto reverse_Itor_ = reverse_Ord_.rbegin(); // Iterator begins in the reverse order.
		
		while(Itor_ != Ord_.end()) {
			
			if(*Itor_ != *reverse_Itor_) {
				// Compares if the values are same.
				const_cast<std::string&>(IntegerToString_Lib_.at(itor_)).assign(std::string("NIE"));
				break;
			}
			
			// Move the iterators.
			Itor_++;
			reverse_Itor_++;
		}		
	}	
	
	return this->IntegerToString_Lib_; // return the map.
};






#undef _WIDNOWS_
#undef _VS2010_PLATFORM_

#undef __CXX11