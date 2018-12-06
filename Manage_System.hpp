//
//  Manage_System.hpp
//  Windows Mangement System
//
//  Created by 赵楚涵 on 2018/12/5.
//  Copyright © 2018 赵楚涵. All rights reserved.
//

#ifndef Manage_System_hpp
#define Manage_System_hpp
#define MAXSIZE 40
#include <stdio.h>
#include "Window.hpp"

class Manage_System{
public:
    vector<vector<char> > Mang_vector(MAXSIZE);
    //对象数组，存储放入的Window对象
    vector<Window> WinIn;
        
    void Display()；
    //重载运算符+，让连个二维向量相加
    Window operator+(Window w1);
    
    Manage_System()//创建一个巨大的二维向量作为边界，初始值为‘ ’  
    void Panduan(Window oldW,Window newW);
    void insert(Window &w);
    void remove(Window &w);
    void resize(Window &w, const int top,const int left,const int bottom, const int right);
};
#endif /* Manage_System_hpp */
