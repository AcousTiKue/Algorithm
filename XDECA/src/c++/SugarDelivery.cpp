/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Windows 10 Professional, Eclipse-Oxygen, Java JDK 10.0.1
** Change Log : First written '18.05.18., updated '18.07.17. Re-factored Java source to C++11.
** File Info : https://www.acmicpc.net/problem/2839
**
** Inputs: 'N' at the first row.
** Outputs: The minimum sugar bags that should be delivered.
** If it cannot make the exact number of the same value of 'N', print -1.
** 
** */

#include "SugarDelivery.h"

#define __2839
#define _EXPERIMENTAL_

#define __CXX11

#ifdef __2839

int SugarDelivery::getBags() {
	
	int tN_ = N_;
	int Bags_ = 0;
		
	// Code below counts how many bags with five-capacity there are.
	Bags_ = N_ / 5;
	tN_ = N_ % 5;
		
	if(N_ >= Pre_Calculated_[tN_][1]) // Boundary value stored in the map.
		Bags_ += Pre_Calculated_[tN_][0]; 
		
	if(Bags_ == 0)
		return -1;
		
	return Bags_;
};


#endif 

#undef __2839
#undef _EXPERIMENTAL_