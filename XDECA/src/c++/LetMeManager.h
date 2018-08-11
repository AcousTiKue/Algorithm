/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.xx
** Change Log : First written '18.08.05.
** File Info : https://www.acmicpc.net/problem/2775
**
** */

#define _XDECA_

#define _UBUNTU_LTS_14_
#define _GXX5_

// COMPILE_OPTION "-std=c++14"


#ifdef _UBUNTU_LTS_14_

#define _2775_

// #include <string>
// #include <numeric>

#include <vector>
#include <functional>
// #include <stack>

namespace _jcode {
	
	using namespace std;
	
	class LetMeManager final {
	private:
		unsigned Floor_;
		unsigned Room_;
		
		// Inner

	public:
		/* Constructor & Destructor */
		LetMeManager(unsigned&, unsigned&);
		virtual ~LetMeManager();

		/* Interface */
		void setFloor(unsigned&) noexcept;
		void setRoom(unsigned&) noexcept;
		
		unsigned getFloor() const noexcept;
		unsigned getRoom() const noexcept;
		
		int run() const noexcept;
	};

};

#endif

