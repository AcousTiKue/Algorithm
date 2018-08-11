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


#define _CXX11
#define _OICW_LINK

#ifdef _OICW_LINK

#include <iostream>
#include <stack>
#include <vector>
#include <memory>

struct Point {
	
	unsigned x;
	unsigned y;
	
	Point(unsigned argvX_, unsigned argvY_) : x(argvX_), y(argvY_) {
		
	};
	
	/* Interface */
	void setPoint(unsigned argvX_, unsigned argvY_) {
		
		x = argvX_;
		y = argvY_;
	};
};



class Ant {
private:
	int Rooms_;	
	std::vector<std::vector<int>>& Map_;
	std::stack<std::unique_ptr<Point>> LastPosition_;
	
protected:
	void readMap(Point);
	
public:
	/* Constructor & Destructor */
	Ant(int argvRooms_, std::vector<std::vector<int>> argvMap_) : Rooms_(argvRooms_), Map_(argvMap_) { };
	virtual ~Ant();
	
	/* Setters & Getters */
	void setMap(std::vector<std::vector<int>>&);
	std::vector<std::vector<int>>& getMap();
	
	/* Interface */
	void run();
	
};

#endif