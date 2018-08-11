// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: RoomNumber.h

#define LINK
#define _CXX11
#define _VS2010_PLATFORM
#define _GXX5

#ifdef _CXX11
#ifdef _GXX5
#ifdef _VS2010_PLATFORM

#define _1475


// #include <map>
#include <string>
#include <algorithm>

namespace _jcode {
	
	// RoomNumber
	struct RoomNumber {
		// Field
		unsigned Counter_;
		
		// Constructor
		RoomNumber(std::string& argrPlate_) : Counter_(0) {
			
			int Counter_[10] = { 0, };
			
			for(unsigned itor_ = 0; itor_ < argrPlate_.size(); itor_++)
				++Counter_[*argrPlate_.substr(itor_, itor_ + 1).c_str() - '0'];
			
			if(!((Counter_[6] + Counter_[9]) % 2))
				Counter_[6] = Counter_[9] = (Counter_[6] + Counter_[9]) / 2;
			
			else {
				Counter_[6] = Counter_[9] = (Counter_[6] + Counter_[9]) / 2;
				Counter_[6]++;				
			}
			
			this->Counter_ = std::max(Counter_[0], Counter_[9]);
		};
		
	};
	
};

#endif
#endif
#endif

#undef _CXX11
