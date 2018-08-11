/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.xx
** Change Log : First written '18.07.17.
** File Info : https://www.acmicpc.net/problem/10828
**
** */


#define __10828
#define _EXPERIMENTAL_

#define __CXX11

#ifdef __10828

#ifdef __CXX11
/* Using standard template library */

#include <iostream>
#include <string>
#include <stack>


class _Stack final {

private:
	
	std::string Query_;
	
	const std::string QueryList_[5] = {
		"push", "pop", "size", "empty", "top"
	};
	
	std::stack<int> Container_;
	
	// Internal engine
	int doPush();
	int doPop();
	int doSize();
	int doEmpty();
	int doTop();
	
	void showStatus() const;
	
	int (_Stack::*QueryMapper_[5])(void);

public:
	
	/* Constructor & Destructor */
	_Stack() {
		
		QueryMapper_[0] = &_Stack::doPush;
		QueryMapper_[1] = &_Stack::doPop;
		QueryMapper_[2] = &_Stack::doSize;
		QueryMapper_[3] = &_Stack::doEmpty;
		QueryMapper_[4] = &_Stack::doTop;		
	};
	
	virtual ~_Stack() = default;

	/* Interface */ 
	void doQuery(std::string&);
	
	void setQuery(std::string&);
	std::string getQuery() const;
};

#endif
#endif

#undef __10828
#undef __CXX11
#undef _EXPERIMENTAL_

