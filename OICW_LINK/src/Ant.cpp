/*
** 
** Theme : [Operations Information & Communications Wing] LINK Algorithm Contest
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.06.
** Change Log : First written '18.07.28.
** File Info : 
** https://www.acmicpc.net/problem/14942
** Input: 
** Output: 
** 
** */

#include "Ant.h"

/* Destructor */
Ant::~Ant() {
	
	
};


void Ant::setMap(std::vector<std::vector<int>>& argvMap_) {
	
	this->Map_ = argvMap_;
};

std::vector<std::vector<int>>& Ant::getMap() {
	
	return this->Map_;
};

void Ant::run() {
	
	Point Ind_(0, 0);
	
	// for(auto itor_ = Map_.begin(); itor_ != Map_.end(); itor_++) {
	for(int itor_ = 0; itor_ < this->Rooms_; itor_++) {
		Ind_.setPoint(itor_, 0);
		LastPosition_.push(std::make_unique<Point>(itor_, 0));
		readMap(Ind_);
	}
};

void Ant::readMap(Point argPastPoint_) {
	
	if(LastPosition_.top()->x + 1 == LastPosition_->top().y) { // Dead end
		
		// clearing stack
		
		// Record first!!!
		while(!LastPosition_.empty())
			LastPosition_.pop();
		
	} else {
		
		if(Map_[LastPosition_->top().x + 1][LastPosition_.top()->y] != 0) {
			
			// Record fist!!!
			LastPosition_.push(std::make_unique<Point>(LastPosition_.top()->x + 1, LastPosition_.top()->y));
		}
		
		
		
		
	}
	
};




