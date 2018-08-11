// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: DFS.cpp

#define _RELATIVE

#ifdef _RELATIVE
#include "../include/BFS.h"
#elif
#include "BFS.h"
#endif

#define _LINUX

/* Global function */
std::vector<std::vector<int>> _jcode::makeGraph() {
	
	int Size_;
	std::vector<std::vector<int>> Graph_;
	
	std::cin >> Size_;
	
	for(int itor_ = 0; itor_ < Size_; itor_++) 
		Graph_.push_back(std::vector<int>(Size_, 0));
	
	for(int itorRow_ = 0; itorRow_ < Size_; itorRow_++) 
		for(int itorCols_ = 0; itorCols_ < Size_; itorCols_++) 
			Graph_[itorRow_][itorCols_];
	
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
	std::cout << "Dfs::~Dfs()" << std::endl;
#endif			
};


std::vector<std::vector<int>> _jcode::Bfs::getGraph() const {
#ifdef _DEBUG
	std::cout << "Dfs::getGraph()" << std::endl;
#endif		
	
	return this->Graph_;
};


/* Interface */
/*
std::queue<int> _jcode::Dfs::runDfs(int argvSrcNode_, std::function<void(int, int)> userDefinedRecordFunction) const {
#ifdef _DEBUG
	std::cout << "Dfs::runDfs()" << std::endl;
#endif	
	
	std::vector<bool> isVisited_(Graph_.size(), false);
	std::queue<int> Route_;
	
	std::function<void(int)> DFS = [&](int argvSrc_) {
		
		isVisited_.at(argvSrc_) = true;
		
		for(unsigned itor_ = 0; itor_ < Graph_.size(); itor_++) {
			
			if(Graph_[argvSrc_][itor_] != 0 && !isVisited_[itor_]) {
#ifdef _DEBUG
				std::cout << "	> Moving from "<< argvSrc_ << " to " << itor_ << std::endl;
#endif				
				Route_.push(argvSrc_);
				
#ifdef _LINUX
				userDefinedRecordFunction(argvSrc_, itor_); // recording
#elif
				if(!userDefinedRecordFunction._Empty())
					userDefinedRecordFunction(argvSrc_, itor_); // recording
#endif
				
				DFS(itor_);
			}
		}
	};
	
	DFS(argvSrcNode_);
	
	return Route_;
}; */

