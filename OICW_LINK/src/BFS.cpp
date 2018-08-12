// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: BFS.cpp

#define _RELATIVE

#ifdef _RELATIVE
#include "../include/BFS.h"
#elif
#include "BFS.h"
#endif

#define _LINUX

/* Global function */
std::vector<std::vector<int>> _jcode::makeGraph() {
#ifdef _DEBUG
				std::cout << "makeGraph()" << std::endl;
#endif	
	
	int Size_;
	std::vector<std::vector<int>> Graph_;
	
	std::cin >> Size_;
	
#ifdef _DEBUG
				std::cout << "	> size : " << Size_ << std::endl;
#endif	
	for(int itor_ = 0; itor_ < Size_; itor_++) 
		Graph_.push_back(std::vector<int>(Size_, 0));
	
	for(int itorRow_ = 0; itorRow_ < Size_; itorRow_++) 
		for(int itorCols_ = 0; itorCols_ < Size_; itorCols_++) 
			std::cin >> Graph_[itorRow_][itorCols_];

#ifdef _DEBUG
				std::cout << "	> end" << std::endl;
#endif	

	return Graph_;
};


/* Constructor & Destructor */
// Constructor
_jcode::Bfs::Bfs(std::vector<std::vector<int>>& argrGraph_) : Graph_(argrGraph_) {
#ifdef _DEBUG
	std::cout << "Bfs::Bfs()" << std::endl;
#endif	
};

// Destructor
_jcode::Bfs::~Bfs() {
#ifdef _DEBUG
	std::cout << "Bfs::~Bfs()" << std::endl;
#endif			
};


std::vector<std::vector<int>> _jcode::Bfs::getGraph() const {
#ifdef _DEBUG
	std::cout << "Bfs::getGraph()" << std::endl;
#endif		
	
	return this->Graph_;
};


/* Interface */
void _jcode::Bfs::runBfs(int argvSrcNode_, std::function<void(int, int)> userDefinedRecordFunction) const {
	// argvSrcNode_ should be set as a starting node for searching.	
#ifdef _DEBUG
	std::cout << "Bfs::runBfs()" << std::endl;
#endif
	
	std::vector<bool> isVisited_(Graph_.size(), false);
	std::queue<int> __T;
		
	
	// Main
	__T.push(argvSrcNode_); // starting node
	
	std::function<void(void)> BFS = [&]() {
		
		int CurrentNode_;
		// isVisited_.at(CurrentNode_) = true;

		while(!__T.empty()) {
			// Continues while __T is not empty. 
			// If the queue has some elements, then it means that there are nodes that haven't been visited.
			CurrentNode_ = __T.front();
			isVisited_.at(CurrentNode_) = true;
			
			__T.pop();
			
			for(unsigned itor_ = 0; itor_ < Graph_.size(); itor_++) {
				
				if(Graph_[CurrentNode_][itor_] != 0 && !isVisited_[itor_]) {
					
					__T.push(itor_);
					isVisited_.at(itor_) = true;
					
#ifdef _DEBUG
				std::cout << "	> Moving from "<< CurrentNode_ << " to " << itor_ << std::endl;
#endif
#ifdef _LINUX
				if(userDefinedRecordFunction) // if not empty
					userDefinedRecordFunction(CurrentNode_, itor_); // recording
#elif
				if(!userDefinedRecordFunction._Empty())
					userDefinedRecordFunction(CurrentNode_, itor_); // recording
#endif					
				}
			}
			
			
		}
	};
	
	BFS();
}