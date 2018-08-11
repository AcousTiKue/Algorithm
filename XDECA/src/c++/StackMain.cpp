/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.xx
** Change Log : First written '18.07.17.
** File Info : https://www.acmicpc.net/problem/10828
**
** */

#include "Stack.h"

int main() {
	
	std::string Query_;
	_Stack T_;
	
	
	
	while(1) {
		
		
		std::cin >> Query_;
		
		T_.setQuery(Query_);
		
		T_.doQuery(Query_);
		
	}
	
	return 0x00;
}