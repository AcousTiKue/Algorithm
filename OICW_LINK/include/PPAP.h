// [LINK] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2008, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-CELL S/W Support, SukJoon Oh
// Version: Experimental

// #pragma once

#include <string>
#include <regex>


namespace _jcode {
	
	class PPAP {		
	private:
		
#define P_ABLE 0x00
#define	P_UNABLE 0x01
		
		std::string Result_[2];
		std::string UserInput_;
		
		// core
		const std::string core() const;
		
	public:
		PPAP(const std::string&);
		virtual ~PPAP();
		
		const std::string run() const;
		
	};
};


