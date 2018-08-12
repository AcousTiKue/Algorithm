#include <iostream>

#include "../include/DFS.h"

//#include "../include/Palindrome.h"

int main() {
	
	std::cout << "Successfully compiled!!" << std::endl;

	std::vector<std::vector<int>> _T = _jcode::makeGraph();
	
	_jcode::Dfs __T(_T);
	
	__T.runDfs(3);
	
	return 0;
};