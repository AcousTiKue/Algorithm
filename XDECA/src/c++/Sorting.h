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

#define _2750_

#ifdef _UBUNTU_LTS_14_
#ifdef _GXX5_

#include <vector>
#include <algorithm>

namespace _jcode {
	
	using namespace std;
	
	class Sorting final {
	private:
		std::vector<int> T_;
		
		// Inner

	public:
		/* Constructor & Destructor */
		Sorting(std::vector<int>&);
		virtual ~Sorting();

		/* Interface */		
		std::vector<int> run() noexcept;
	};

};

#endif
#endif
