/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.xx
** Change Log : First written '18.07.17.
** File Info : https://www.acmicpc.net/problem/?
**
** */


#define _XDECA_

#define _UBUNTU_LTS_14_
#define _GXX5_

// COMPILE_COMMAND "g++ -o common_main_bin CommonMain.cpp LetMeManager.*"
// COMPILE_OPTION "-std=c++14"

#define _2775_

#ifdef _UBUNTU_LTS_14_
#ifdef _GXX5_

#include "Sorting.h"

/* Constructor */
_jcode::Sorting::Sorting(std::vector<int>& argrT_) : T_(argrT_) { } ;

/* Destructor */
_jcode::Sorting::~Sorting() { 
};


std::vector<int> _jcode::Sorting::run() noexcept {

	std::sort(T_.begin(), T_.end());
	
	return T_;
};


#endif
#endif
