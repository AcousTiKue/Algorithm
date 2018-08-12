// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: XorSeries.h

#define LINK
#define _CXX11

#define _LINUX

#define _DEBUG_ON_

#include <string>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>

#include <bitset>

#ifdef _DEBUG_ON_
#include <iostream>
#endif
// Compile command: 
//	g++ -o common_main_bin ../include/XorSeries.h ../src/XorSeries.cpp CommonMain.cpp -std=c++14

namespace _jcode {
	
	// Class XorSeries
	class XorSeries {
	private:
		// Field
		const int N_;
		
		std::vector<int> SeriesA_;
		
	public:
		// Constructor
		explicit XorSeries(const int&, std::vector<int>&);
		// Destructor
		virtual ~XorSeries();
		
		/* Interface */
			// No need for getters and setters, thus deleted.
#ifdef __CXX14
			// getters
		const int getB() const = delete;
		const std::string getSeriesA() const = delete;
		const std::string getSeriesB() const = delete;
		
			// setters
		void setSeriesA() = delete;

#elif defined(__CXX11)
		
	private:
		// C++11 does not support 'delete' syntax, so only declared in private scope!!
					// getters
		const int getB() const;
		const std::string getSeriesA() const;
		const std::string getSeriesB() const;
		
			// setters
		void setSeriesA();
		
	public:
#endif
		const int run() const;
				
	};
	
	
	// class XorSeriesImproved
	class XorSeriesImproved {
	private:
		// Field
		const int N_;
		
#define BITSET std::bitset<31>
		std::list<BITSET> SeriesA_;
		
	public:
		// Constructor
		explicit XorSeriesImproved(const int&, std::list<BITSET>&);
		// Destructor
		virtual ~XorSeriesImproved();
		
		/* Interface */
			// No need for getters and setters, thus deleted.
#ifdef __CXX14
			// getters
		const int getB() const = delete;
		const std::string getSeriesA() const = delete;
		const std::string getSeriesB() const = delete;
		
			// setters
		void setSeriesA() = delete;

#elif defined(__CXX11)
		
	private:
		// C++11 does not support 'delete' syntax, so only declared in private scope!!
					// getters
		const int getB() const;
		const std::string getSeriesA() const;
		const std::string getSeriesB() const;
		
			// setters
		void setSeriesA();
		
	public:
#endif
		// run()
		const int run() const;
		
	};
	
	
};