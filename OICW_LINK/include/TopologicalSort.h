// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: TopologicalSort.h

#define _DEBUG_ON_
#define __CXX14

#define _LINUX_

#include <vector>
#include <algorithm> // std::reverse()

#ifdef _DEBUG_ON_

#include <iostream>
#endif

/* This class uses DFS. */
#define _RELATIVE_

#ifdef _RELATIVE_
//#include "../include/DFS.h"
//#include "DFS.h"
#elif
//#include "DFS.h"
#endif

/*
7

0 1 1 0 1 1 1
1 0 1 0 1 0 1
0 1 0 1 1 0 0
1 1 0 0 0 1 1
1 0 1 1 0 1 0
1 0 0 1 0 0 1
1 1 1 0 1 0 0
*/

namespace _jcode {
	
	class TopologicalSort final {
	private:
		std::vector<int> Sort_; // This is where sorted list is saved.
		std::vector<std::vector<int>> Graph_;
		
	public:
		/* Constructor & Destructor */
#ifdef __CXX14
		TopologicalSort() = default;
		virtual ~TopologicalSort() = default;
#else
		TopologicalSort();
		virtual ~TopologicalSort();		
#endif
		TopologicalSort(std::vector<std::vector<int>>&);
		
		/* Interface */
		std::vector<int> run(int);
	};
};