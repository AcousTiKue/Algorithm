#include <iostream>
#include <vector>

#include "../include/DFS.h"
#include "../include/BFS.h"

//#include "../include/Palindrome.h"

int main() {
	
	std::cout << "Successfully compiled!!" << std::endl;
	std::vector<int> DfsRoute_;
	std::vector<int> BfsRoute_;
	
	
	std::vector<std::vector<int>> _T = _jcode::makeGraphDfs();
	
	_jcode::Dfs ___T(_T);
	_jcode::Bfs __T(_T);
	
	__T.run(3, [&](int argV_) { BfsRoute_.push_back(argV_); });
	___T.run(3, [&](int argV_) { DfsRoute_.push_back(argV_); });
	
	
	std::cout << "DFS Route : " << std::endl;
	for(auto& itor_ : DfsRoute_)
		std::cout << itor_ << " ";
	
	std::cout << std::endl;
	std::cout << "BFS Route : " << std::endl;
	for(auto& itor_ : BfsRoute_)
		std::cout << itor_ << " ";
	
	return 0;
};