/*
** 
** Theme : [Operations Information & Communications Wing] LINK Algorithm Contest
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.06.
** Change Log : First written '18.07.28.
** File Info : 
** https://www.acmicpc.net/problem/14936
** Input: 
** Output: 
** 
** */

#include <iostream>

int main() {
	
	int Second_, ElevatorButton_, Counter_ = 0;
	
	std::cin >> ElevatorButton_ >> Second_;
	
	int Array_[] = {
		
		0, ElevatorButton_, ElevatorButton_ / 2, ElevatorButton_ / 2, (ElevatorButton_ - 1) / 3 + 1, 
			// 0, A, B, C, D
		(ElevatorButton_ - 1) / 3 + 1 + ElevatorButton_, 
		(ElevatorButton_ - 1) / 3 + 1 + ElevatorButton_ / 2,
		(ElevatorButton_ - 1) / 3 + 1 + ElevatorButton_ / 2
			// AD, BD, CD
	};
	
	for(int itor_ = 0; itor_ < 8; itor_++) {
		
		if(Array_[itor_] <= Second_)
			Counter_++;
	}
	
	std::cout << Counter_;
}