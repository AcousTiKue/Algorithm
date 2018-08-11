/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.xx
** Change Log : First written '18.07.17.
** File Info : https://www.acmicpc.net/problem/10845
**
** */


#define __10845
#define _EXPERIMENTAL_

#define __CXX11

#ifdef __10845

#ifdef __CXX11
/* Using standard template library */

#include <iostream>
#include <string>
#include <queue>


class _Queue final {

private:
	
	std::string Query_;
	
	const std::string QueryList_[6] = {
		"push", "pop", "size", "empty", "front", "back"
	};
	
	std::queue<int> Container_;
	
	// Internal engine
	int doPush();
	int doPop();
	int doSize();
	int doEmpty();
	int doFront();
	int doBack();
	
	
	void showStatus() const;
	
	int (_Queue::*QueryMapper_[6])(void);

public:
	
	/* Constructor & Destructor */
	_Queue() {
		
		QueryMapper_[0] = &_Queue::doPush;
		QueryMapper_[1] = &_Queue::doPop;
		QueryMapper_[2] = &_Queue::doSize;
		QueryMapper_[3] = &_Queue::doEmpty;
		QueryMapper_[4] = &_Queue::doFront;
		QueryMapper_[5] = &_Queue::doBack;
	};
	
	virtual ~_Queue() = default;

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

