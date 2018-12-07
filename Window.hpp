//
//  Window.hpp
//  Windows Mangement System
//
//  Created by 赵楚涵 on 2018/11/13.
//  Copyright © 2018 赵楚涵. All rights reserved.
//

#ifndef Window_hpp
#define Window_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Window{
public:
    
    int coordinates[4];      //方位（top,left,bottom,right)
    int z_order;            //z-order
    int width;//宽度
    int length;//长度
    char str;
    vector<vector<char> > Str;
   // friend class Manage_System; //设Manage_System为友元类

    
    bool operator<(Window w);
    bool operator>(Window w);
    bool operator==(Window w);
    Window(const int top,const int left,const int bottom, const int right, char x, const int z);
    //Window();
    
    //void display();
    
};


#endif /* Window_hpp */
