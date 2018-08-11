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

#include <string>
#include <vector>
#include <memory>


namespace _jcode {
	
	class AcmHotel {
	private:
		// Fields	
		int Height_, Width_, People_;
		
#ifndef _CXX11
		// Deletion
		AcmHotel();		
#elif defined(_CXX11)
		AcmHotel() = delete;		
#endif
		
	public:
		/* Constructor & Destructor */
		explicit AcmHotel(const int&, const int&, const int&);
		virtual ~AcmHotel();
		
		/* Interface */
		int getHeight() const;
		int getWidth() const;
		
		void setHeight(int);
		void setWidth(int);
		
		int run() const;
	};
	
};


#endif
#endif
#endif