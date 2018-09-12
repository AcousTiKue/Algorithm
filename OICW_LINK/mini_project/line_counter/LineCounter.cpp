// [Link] Algorithm Study
// Environment: Ubuntu LTS 14
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: LineCounter.cpp

#include <fstream>
#include <iostream>

#include "LineCounter.h"

// Constructor
_jcode::LineCounter::LineCounter(std::string& argFileName_) : FileName_(argFileName_), Lines_(0) {
	
};


// Destructor
_jcode::LineCounter::~LineCounter() {
	
	
};

// Interface
long long _jcode::LineCounter::countLines() {
	
	std::ifstream openFile_(FileName_.c_str()); // Opeing a file in read mode.
	std::string _T;
	
	if(openFile_) { // When the file is open!!
		
		while(std::getline(openFile_, _T)) {
			
			Lines_++;
		}
	}
	
	openFile_.close();
	
	return Lines_;
};

// Setter
void _jcode::LineCounter::setFileName(std::string& argFileName_) {
	
	FileName_ = argFileName_;
};

void _jcode::LineCounter::setFileName(char* argFileName_) {
	
	FileName_ = argFileName_;
};

std::string _jcode::LineCounter::getFileName() const {
	
	return FileName_;
};

