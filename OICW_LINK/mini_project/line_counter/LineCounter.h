// [Link] Algorithm Study
// Environment: Ubuntu LTS 14
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: LineCounter.h

#define __CXX_REV
#define _LINUX_

#include <string>

namespace _jcode {
	
	class LineCounter {
	private:
		std::string FileName_;
		long long Lines_;
		
	public:
		LineCounter(std::string&);
		virtual ~LineCounter();
		
		/* Interface */
		long long countLines();
		
		/* Getters & Setters  */		
		std::string getLines() const;
		std::string getFileName() const;
		
		void setFileName(std::string&);
		void setFileName(char*);
		
		void resetCounter() { Lines_ = 0; };
	};
};
