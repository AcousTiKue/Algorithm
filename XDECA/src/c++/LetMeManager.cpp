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

// COMPILE_COMMAND "g++ -o common_main_bin CommonMain.cpp LetMeManager.*"
// COMPILE_OPTION "-std=c++14"

#define _2775_

#ifdef _UBUNTU_LTS_14_
#ifdef _GXX5_

#include "LetMeManager.h"

/* Constructor */
_jcode::LetMeManager::LetMeManager(unsigned& argrFloor_, unsigned& argrRoom_) : Floor_(argrFloor_), Room_(argrRoom_) { } ;

/* Destructor */
_jcode::LetMeManager::~LetMeManager() { 
};

/* Interface */
void _jcode::LetMeManager::setFloor(unsigned& argrFloor_) noexcept {
	
	this->Floor_ = argrFloor_;
};

void _jcode::LetMeManager::setRoom(unsigned& argrRoom_) noexcept {
	
	this->Room_ = argrRoom_;
};

unsigned _jcode::LetMeManager::getFloor() const noexcept {
	
	return this->Floor_;
};

unsigned _jcode::LetMeManager::getRoom() const noexcept {
	
	return this->Room_;
};


int _jcode::LetMeManager::run() const noexcept {
	
	std::vector<std::vector<int>> Accumulation_Map_;
	
	/* Initialization */
	Accumulation_Map_.push_back(std::vector<int>(Room_));
	
	for(int i = 0; i < Room_; i++)
		Accumulation_Map_[0][i] = i + 1 + Accumulation_Map_[0][i - 1];
	
	for(int itor_Floor_ = 0; itor_Floor_ < Floor_; itor_Floor_++) {
		
		Accumulation_Map_.push_back(std::vector<int>(Room_));
		
		for(int i = 0; i < Room_; i++)
			Accumulation_Map_[itor_Floor_][i] = i + 1 + Accumulation_Map_[itor_Floor_ - 1][i];
	}
	
	return Accumulation_Map_[Floor_][Room_ - 1];
};


#endif
#endif
