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
    vector<vector<char> > array(coordinates[2]-coordinates[0]+1);//length
    
    //初始化每行vector
    for (int i = 0; i < array.size; i++)
        array[i].resize(coordinates[3]-coordinates[1]+1);//width
    //vector赋值
    for(int i = 0; i < array.size; i++)
    {
        //赋值
        for (int j = 0; j < array[0].size;j++)
        {
            array[i][j] = x;
        }
    }
    //将array结果传给对象
    Str=array;
}

/*void Window::insert(const int top,const int left,const int bottom, const int right,char x, const int z){
    coordinates[0]=top;coordinates[1]=left;coordinates[2]=bottom;coordinates[3]=right;  //传入方位
    z_order=z;
    str=x;
    length=coordinates[2]-coordinates[0]+1;//长度
    width=coordinates[3]-coordinates[1]+1;//宽度
    //初始化二维向量array存放字符
    vector<vector<char> > array(coordinates[2]-coordinates[0]+1);//length
    
    //初始化每行vector
    for (int i = 0; i < array.size; i++)
        array[i].resize(coordinates[3]-coordinates[1]+1);
    //vector赋值
    for(int i = 0; i < array.size; i++)
    {
        //赋值
        for (int j = 0; j < array[0].size;j++)
        {
            array[i][j] = x;
        }
    }
    //将array结果传给对象
    Str=array;
}

void Window::display(){
    //打印输出
    vector<char>::iterator it;
    vector<vector<char> >::iterator iter;
    vector<char> vec_tmp;
    
    //上面的空格
    for (int i1=1; i1<coordinates[0]; ++i1) {
        cout<<""<<endl;
    }
    //cout << "Use iterator : " << endl;
    for(iter = Str.begin(); iter != Str.end(); iter++)
    {
        vec_tmp = *iter;
        //左边的空格
        for (int j1=1; j1<coordinates[1]; ++j1)
            cout<<" ";
        
        for(it = vec_tmp.begin(); it != vec_tmp.end(); it++)
            cout << *it << " ";
        
        cout << endl;
    }
}

*/