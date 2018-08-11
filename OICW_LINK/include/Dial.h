// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: Dial.h

#define LINK
#define _CXX11
#define _VS2010_PLATFORM
#define _GXX5

#ifdef _CXX11
#ifdef _GXX5
#ifdef _VS2010_PLATFORM

#define _5622

#include <string>

namespace _jcode {
	
	const unsigned Lib_[] = {
		
		2, 2, 2, // A, B, C
		3, 3, 3, // D, E, F
		4, 4, 4, // G, H, I
		5, 5, 5, // J, K, L
		6, 6, 6, // M, N, O
		7, 7, 7, 7, // P, Q, R, S
		8, 8, 8, // T, U, V
		9, 9, 9, 9 // W, X, Y, Z
	};
	
	struct Dial {
		
		int Res_;
		std::string String_;

		Dial(std::string argrString_) : String_(argrString_), Res_(0) {
		
			for(int itor_ = 0; itor_ != String_.size(); itor_++)
				Res_ += Lib_[*String_.substr(itor_, itor_ + 1).c_str() - 'A'];
		};

	};
		
};

#endif
#endif
#endif