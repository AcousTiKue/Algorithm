/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.xx
** Change Log : First written '18.08.05.
** File Info : https://www.acmicpc.net/problem/?
**
** */

#define _XDECA_

#define _UBUNTU_LTS_14_
#define _GXX5_

#define COMPILE_OPTION "-std=c++14"


#ifdef _UBUNTU_LTS_14_
#ifdef 



#include <string>
#include <numeric>

#include <vector>
#include <stack>

namespace _jcode {
	
	
	class ParenthesisValue final {
	private:
		std::string T_;
		
		// Inner
		bool isValid() const noexcept;

	public:
		/* Constructor & Destructor */
		ParenthesisValue(std::string&);
		virtual ~ParenthesisValue();

		/* Interface */

		void setT() noexcept;
		std::string getT() const noexcept;
		
		int run() noexcept;
	};

}

#endif
#endif

