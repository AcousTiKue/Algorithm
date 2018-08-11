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

#define __2839
#define _EXPERIMENTAL_

#define __CXX11

#ifdef __2839

#include <iostream>

class SugarDelivery final {
	
private:
	int N_ = 0; // This will be the container for the input 'N'.
	
#ifdef __CXX11
	const int Pre_Calculated_[5][2] 
		= { 
			{0, 0}, // [0] When nothing remains. 
			{1, 6}, // [1] Case when 1 remains, of which (+5, -3, -3). Only when N >= 6. 
			{2, 12}, // [2] Case when 2 remains, of which (+5, +5, -3, -3, -3, -3). Only when N >= 12. 
			{1, 3}, // [3] Case when 3 remains, of which (-3). Only when N >= 3
			{2, 9}  // [4] Case when 4 remains, of which (+5, -3, -3, -3). Only when N >= 9. 
		};	
#endif
	
protected:	
	
public:
	// Constructor & Destructor
	SugarDelivery() = default;
	SugarDelivery(int argvN_ = 0) : N_(argvN_) {		
		
	};
	
	virtual ~SugarDelivery() = default;
	
	/* Interface */
		// setter & getter
	inline void setN();
	
	inline int getN() = delete; // deprecated
	
	int getBags();
};

#endif 

#undef __2839
#undef _EXPERIMENTAL_
