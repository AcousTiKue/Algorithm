// [Link] Algorithm Study
// Environment: Ubuntu LTS 14
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: BFS.h

#define _DEBUG

#include <vector>
#include <queue>
#include <functional>

// #include <exception>

#include <iostream>


namespace _jcode {
	
	/* std::vector<std::vector<int>> makeGraph(); */
	std::vector<std::vector<int>> makeGraph();
	
	class Bfs final {
	private:
		std::vector<std::vector<int>> Graph_;	
		
	public:
		/* Constructor & Destructor */
		Bfs(std::vector<std::vector<int>>&);
		
		virtual ~Bfs();
		
		/* Interface */
		// Getter
		std::vector<std::vector<int>> getGraph() const;
	};	
};
