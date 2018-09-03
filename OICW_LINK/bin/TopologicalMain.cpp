#include <iostream>
#include <vector>

#include "../include/DFS.h"
// #include "../include/BFS.h"
#include "../include/TopologicalSort.h"

/*
	 g++ -o topological_main_bin -std=c++14 ../include/DFS.h ../include/TopologicalSort.h ../src/DFS.cpp ../src/TopologicalSort.cpp ./TopologicalMain.cpp
*/

int main() {
	
	std::vector<int> DfsRoute_;
	std::vector<int> TopologicalSortResult_;
	
	
	std::vector<std::vector<int>> _T = _jcode::makeGraphDfs();
	
	_jcode::Dfs ___T(_T);
	___T.run(0, [&](int argV_) { DfsRoute_.push_back(argV_); });
	
	_jcode::TopologicalSort ____T(_T);
	TopologicalSortResult_ = ____T.run(0);
	
	std::cout << "DFS Route : " << std::endl;
	for(auto& itor_ : DfsRoute_)
		std::cout << itor_ << " > ";
	
	std::cout << std::endl;
	std::cout << "Topological Sort Result : " << std::endl;
	for(auto& itor_ : TopologicalSortResult_)
		std::cout << itor_ << " > ";
	
	return 0;
};