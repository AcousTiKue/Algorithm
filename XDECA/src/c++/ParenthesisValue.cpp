/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.xx
** Change Log : First written '18.07.17.
** File Info : https://www.acmicpc.net/problem/?
**
** */


#define _XDECA_

#define _UBUNTU_LTS_14_
#define _GXX5_

#define COMPILE_OPTION "-std=c++14"


#ifdef _UBUNTU_LTS_14_
#ifdef _GXX5_

#include "ParenthesisValue.h"

/* Constructor */
_jcode::ParenthesisValue::ParenthesisValue(std::string& argrT_) : T_(argrT_) {
	
};

/* Destructor */
_jcode::ParenthesisValue::~ParenthesisValue() { };

/* Interface */
void _jcode::ParenthesisValue::setT() noexcept {
	
};

std::string _jcode::ParenthesisValue::getT() const noexcept {
	
	return this->T_;
};

bool _jcode::ParenthesisValue::isValid() const noexcept {
	
	unsigned Counter_[4] = { 0, };
	
		
	for(auto itor_t_ : T_) {
			
		if(itor_t_ == '(') Counter_[0]++;
		if(itor_t_ == ')') Counter_[1]++;
		if(itor_t_ == '[') Counter_[2]++;
		if(itor_t_ == ']') Counter_[3]++;
	}
	
	if(std::min(Counter_[0], Counter_[3]) != std::max(Counter_[0], Counter_[3]))
		return false;
	
	else return true;
};

int _jcode::ParenthesisValue::run() noexcept {
	
	enum { LEFT, RIGHT };
	
	int Flag_ = LEFT;
	
	std::stack<char> Stack_;
	std::vector<int> Res_Vec_;
		
	Res_Vec_.push_back(1);
	
	if(!isValid())
		return 0;
	
	// Interpreting
	
	for(auto itor_t_ : T_) {
		
		if(itor_t_ == '(' || itor_t_ == '[') {
			
			if(Flag_ == RIGHT) {
				
				if(itor_t_ == '(')
					Res_Vec_.push_back(2);
				
				else
					Res_Vec_.push_back(3);
					
			}
			
			Stack_.push(itor_t_); // First, push!!
			Flag_ = LEFT;
			
		}
		
		else {
			
			if(itor_t_ == ')') {
				
				Flag_ = RIGHT;
				Stack_.pop(); // First, push!!
				
				*Res_Vec_.end() * 2;
				
			} else {
				
				Flag_ = RIGHT;
				Stack_.pop(); // First, push!!
				
				*Res_Vec_.end() * 3;
			}
		}		
	}
	
	return std::accumulate(Res_Vec_.begin(), Res_Vec_.end(), 0);
};


#endif
#endif
