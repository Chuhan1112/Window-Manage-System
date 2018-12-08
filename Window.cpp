//
//  Window.cpp
//  Windows Mangement System
//
//  Created by 赵楚涵 on 2018/11/13.
//  Copyright © 2018 赵楚涵. All rights reserved.
//

#include "Window.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

Window::Window(const int top,const int left,const int bottom, const int right, char x, const int z){
    coordinates[0]=top;coordinates[1]=left;coordinates[2]=bottom;coordinates[3]=right;  //传入方位
    z_order=z;
    str=x;
    length=coordinates[2]-coordinates[0]+1;//长度
    width=coordinates[3]-coordinates[1]+1;//宽度
    //初始化二维向量array存放字符
    vector<vector<char> > array(length);//length
    
    //初始化每行vector
    for (int i = 0; i < array.size(); i++)
        array[i].resize(width);//width
    //vector赋值
    for(int i = 0; i < array.size(); i++)
    {
        //赋值
        for (int j = 0; j < array[0].size();j++)
        {
            array[i][j] = str;
        }
    }
    //将array结果传给对象
    Str=array;
}
bool Window::operator<(Window w){
    return z_order<w.z_order;
}
bool Window::operator>(Window w){
    return z_order>w.z_order;
}
//重载==,判断Window对象是否相等
bool Window::operator==(Window w){
    if(z_order==w.z_order){ //判断zorder
       if(str==w.str){      //判断字符
            if(coordinates==w.coordinates){
                return true;
            }else{return false;}
       }else{return false;} 
    }else {return false;}

}
void Window::Rsize(const int top,const int left,const int bottom, const int right){
    coordinates[0]=top;coordinates[1]=left;coordinates[2]=bottom;coordinates[3]=right;
     vector<vector<char> > array(coordinates[2]-coordinates[0]+1);//length
    
    //初始化每行vector
    for (int i = 0; i < array.size(); i++)
        array[i].resize(coordinates[3]-coordinates[1]+1);//width
    //vector赋值
    for(int i = 0; i < array.size(); i++)
    {
        //赋值
        for (int j = 0; j < array[0].size();j++)
        {
            array[i][j] = str;
        }
    }
    //将array结果传给对象
    Str=array;
}

