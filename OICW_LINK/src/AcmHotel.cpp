// [Link] Algorithm Study
// Environment: Windows 7 32-bit, Visual Studio Professional 2013, VS2010 Platform Tool
// Author: Air Force Operations Information & Communication Wing, KTMO-Cell S/W Support, SukJoon Oh
// Version: Experimental
// File: RoomNumber.h

#define LINK
#define _CXX11
#define _VS2010_PLATFORM
#define _GXX5

#ifdef _CXX11
#ifdef _GXX5
#ifdef _VS2010_PLATFORM

#define _10250

#include "AcmHotel.h"

/* Constructor */
_jcode::AcmHotel::AcmHotel(const int& argrHeight_, const int& argrWidth_, const int& argrPeople_) 
	: Height_(argrHeight_), Width_(argrWidth_), People_(argrPeople_) {
	
};

/* Destructor */
_jcode::AcmHotel::~AcmHotel() { }; // default

/* Interface */
// getter
int _jcode::AcmHotel::getHeight() const { return this->Height_; };
int _jcode::AcmHotel::getWidth() const { return this->Width_; };

// setter
void _jcode::AcmHotel::setHeight(int argvHeight_) { this->Height_ = argvHeight_; };
void _jcode::AcmHotel::setWidth(int argvWidth_) { this->Width_ = argvWidth_; };

#endif
#endif
#endif