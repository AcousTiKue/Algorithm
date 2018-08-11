// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: DFS.h

#define _DEBUG

#include <vector>
#include <queue>
#include <functional>

// #include <exception>

#include <iostream>


namespace _jcode {
	
	/* std::vector<std::vector<int>> makeGraph(); */
	std::vector<std::vector<int>> makeGraph();
	
	class Dfs final {
	private:
		std::vector<std::vector<int>> Graph_;	
		
	public:
		/* Constructor & Destructor */
		Dfs(std::vector<std::vector<int>>&);
		
		virtual ~Dfs();
		
		/* Interface */
		// Getter
		std::vector<std::vector<int>> getGraph() const;
		
		std::queue<int> runDfs(int, std::function<void(int, int)> = std::function<void(int, int)>(0)) const;
	};	
};
