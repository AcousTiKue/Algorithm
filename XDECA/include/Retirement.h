// [XDECA] Algorithm Study
// Environment: Ubuntu 14 LTS, g++ 5.5.0, gcc 5.5.0
// Author: Air Force Operations Information & Communication Wing, KTMO-CELL S/W Support, SukJoon Oh
// Version: Experimental
// File: Retirement.

#pragma once

#define _XDECA_

#define _UBUNTU_LTS_14_
#define _GXX5_

#define _RELATIVE_

#ifdef _RELATIVE_

#include "./DFS.h"
#else

#include "DFS.h"
#endif

// COMPILE_COMMAND "g++ -o common_main_bin CommonMain.cpp LetMeManager.*"
// COMPILE_OPTION "-std=c++14"
#ifdef _DEBUG_ON_

#include <iostream>
#endif

#include <vector>


namespace _jcode {
	
	// class Retirement
	class Retirement {
	private:
		int Days_;
		std::vector<int> Graph_;
		
 		std::vector<int>& Time_;
		std::vector<int>& Pay_;
		
	public:
		// Constructor
		Retirement(std::vector<int>&, std::vector<int>&);
		// Destructor
		virtual ~Retirement();
		
		
#ifdef __CXX11
	private:		
		const std::vector<int> getTime() const;
		const std::vector<int> getPay() const;
		
		void setTime(const std::vector<int>&);
		void setPay(const std::vector<int>&);
		
	public:
#elif defined(__CXX14)

		const std::vector<int> getTime() const = delete;
		const std::vector<int> getPay() const = delete;
		
		void setTime(const std::vector<int>&) = delete;
		void setPay(const std::vector<int>&) = delete;

#endif		
		/* Interface */
		const int run() const;
	};		
};




