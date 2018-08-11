/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Windows 10 Professional, Eclipse-Oxygen, Java JDK 10.0.1
** Change Log : First written '18.05.18., updated '18.07.17. Re-factored Java source to C++11.
** File Info : https://www.acmicpc.net/problem/2839
**
** Inputs: 'N' at the first row.
** Outputs: The minimum sugar bags that should be delivered.
** If it cannot make the exact number of the same value of 'N', print -1.
** 
** */

#include "SugarDelivery.h"

#include <iostream>

int main() {
    
    using std::cout;
    using std::cin;
    using std::endl;
    
    
    int Temporary_Val_ = 0;
    
    cin >> Temporary_Val_;
    
    SugarDelivery T_(Temporary_Val_);
    
    cout << T_.getBags();
    
    
    return 0;
}