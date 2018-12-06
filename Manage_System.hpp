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
#include <algorithm>
class Manage_System{
public:
    vector<vector<char> > Mang_vector;
    //对象数组，存储放入的Window对象
    vector<Window> WinIn;
        
    void Display();
    //重载运算符+，让连个二维向量相加
    vector<vector<char> > Manage_System::Add(Window w1);
    Manage_System(){//创建一个巨大的二维向量作为边界，初始值为‘ ’
        vector<vector<char>> v1(MAXSIZE);
        for(int i=0;i < v1.size();++i)
            v1[i].resize(MAXSIZE);
            
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v1[0].size();j++)
                v1[i][j]=' ';
        }
        Mang_vector=v1;
}
    void Panduan(Window oldW,Window newW);
    void insert(Window &w);
    void remove(Window &w);
    void resize(Window &w, const int top,const int left,const int bottom, const int right);
};
#endif /* Manage_System_hpp */
