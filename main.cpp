//
//  main.cpp
//  Windows Mangement System
//
//  Created by 赵楚涵 on 2018/11/13.
//  Copyright © 2018 赵楚涵. All rights reserved.
//
//#include <algorithm>
#include <iostream>
#include <string>
//#include "Window.hpp"
#include "Manage_System.hpp"

void Method();
Manage_System s;
int n1=0;

int main() {
    
    string instruction;
    cout<<"==========================================="<<endl;
    cout<<"          欢迎使用命令行窗口管理系统,请输入命令   "<<endl;
    cout<<"          命令列表："<<endl;
    cout<<"          1. insert             "<<endl;
    cout<<"          2. remove             "<<endl;
    cout<<"          3. resize             "<<endl;
    cout<<"          4. quit             "<<endl;
    cout<<"==========================================="<<endl; 

    while(1){
        cin>>instruction;
        if (instruction=="insert"){n1 = 1;}
        else if(instruction=="remove"){n1 = 2;}
        else if(instruction=="resize"){n1 = 3;}
        else if(instruction=="quit"){n1 = 4;}

        Method();
        s.Display();
        cout<<"           请继续输入命令   "<<endl;
        return 0;
    }
    
    
    return 0;
}

void Method(){
    int zorder, direction[4];
    char str;
     
    //判断指令

    switch (n1) {
        case 1:
        {
            cout<<"输入方位（top,left,bottom,right)和zorder"<<endl;
            cin>>direction[0]>>direction[1]>>direction[2]>>direction[3]>>zorder;
            cout<<"输入字符"<<endl;
            cin>>str;
            Window w(direction[0], direction[1], direction[2], direction[3], str, zorder);
            s.insert(w);
            break;
        }
        case 2:
        {   
            cin>>direction[0]>>direction[1]>>direction[2]>>direction[3]>>zorder;
            cout<<"输入字符"<<endl;
            cin>>str;
            Window w(direction[0], direction[1], direction[2], direction[3], str, zorder);
            s.remove(w);
            break;
        }
        case 3:
        {   int new_direction[4]; 
            cout<<"输入原来窗口的方位（top,left,bottom,right)和zorder"<<endl;
            cin>>direction[0]>>direction[1]>>direction[2]>>direction[3]>>zorder;
            cout<<"输入字符"<<endl;
            cin>>str;
            cout<<"输入调整后窗口的方位（top,left,bottom,right)"<<endl;
            cin>>new_direction[0]>>new_direction[1]>>new_direction[2]>>new_direction[3];
            Window w(direction[0], direction[1], direction[2], direction[3], str, zorder);
            s.resize(w,new_direction[0],new_direction[1],new_direction[2],new_direction[3]);
            break;
        }
        case 4:
            exit(0);
        default:
            cout<<"指令错误"<<endl;
            break;
        }    
}
