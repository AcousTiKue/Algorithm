// [LINK] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2008, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-CELL S/W Support, SukJoon Oh
// Version: Experimental
// File: Palindrome.h

#define _DEBUG_ON_
#define __CXX11

#define _VS2010_PLATFORM_
#define _WIDNOWS_

#include <map>
#include <string>

#include <cmath>

#include <exception>
#include <iostream>

#include <algorithm>


namespace _jcode {
	
	// class Palindrome
	class Palindrome {
	private:
		std::string String_;
		std::map<int, std::string> IntegerToString_Lib_;
		
	public:
		// Constructor
		explicit Palindrome(std::string&);
		// Destructor
		virtual ~Palindrome();
		
		/* Interface */
		// No need for getters and setters, thus deleted.
#ifdef __CXX14
		const std::map<int, std::string>& getLib() const = delete;
		void setLib(std::map<int, std::string>&) = delete;
#elif defined(__CXX11)
	private:
		const std::map<int, std::string>& getLib() const;
		void setLib(std::map<int, std::string>&);
		
	public:
#endif
		
		std::map<int, std::string> run() const;
	};	
};

#undef _WIDNOWS_
#undef _VS2010_PLATFORM_

#undef __CXX11