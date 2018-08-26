// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: DFS.cpp

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

#define _RELATIVE

#ifdef _RELATIVE
#include "../include/DFS.h"

#elif

#include "DFS.h"

#endif

#define _LINUX

/* Global function */
std::vector<std::vector<int>> _jcode::makeGraphDfs() {
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
_jcode::Dfs::Dfs(std::vector<std::vector<int>>& argrGraph_) : Graph_(argrGraph_) {
#ifdef _DEBUG
	std::cout << "Dfs::Dfs(&)" << std::endl;
#endif	
};


// Destructor
_jcode::Dfs::~Dfs() {
#ifdef _DEBUG
	std::cout << "Dfs::~Dfs()" << std::endl;
#endif			
};


std::vector<std::vector<int>> _jcode::Dfs::getGraph() const {
#ifdef _DEBUG
	std::cout << "Dfs::getGraph()" << std::endl;
#endif		
	
	return this->Graph_;
};


/* Interface */
void _jcode::Dfs::run(int argvSrcNode_, std::function<void(int)> userDefinedRecordFunction) const {
	// argvSrcNode_ should be set as a starting node for searching.	
#ifdef _DEBUG
	std::cout << "Dfs::run()" << std::endl;
#endif	
	
	std::vector<bool> isVisited_(Graph_.size(), false);
	
	std::function<void(int)> DFS = [&](int argvSrc_) {
		
		isVisited_.at(argvSrc_) = true;
						
#ifdef _LINUX
				if(userDefinedRecordFunction) // if not empty
					userDefinedRecordFunction(argvSrc_); // recording
#elif
				if(!userDefinedRecordFunction._Empty())
					userDefinedRecordFunction(argvSrc_); // recording
#endif		
		
		for(unsigned itor_ = 0; itor_ < Graph_.size(); itor_++) {
			
			if(Graph_[argvSrc_][itor_] != 0 && !isVisited_[itor_]) {
#ifdef _DEBUG
				std::cout << "	> Moving from "<< argvSrc_ << " to " << itor_ << std::endl;
#endif								
				DFS(itor_);
			}
		}
	};
	
	DFS(argvSrcNode_);
};