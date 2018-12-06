//
//  Method.hpp
//  Windows Mangement System
//
//  Created by 赵楚涵 on 2018/12/4.
//  Copyright © 2018 赵楚涵. All rights reserved.
//

#ifndef Method_hpp
#define Method_hpp
#include "Window.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;
class Method{
private:
    //读入指令
    int n,zorder, direction[4];
    char str;
    
public:
    
    Method(){
        //Management_System WS;
        cout<<"==========================================="<<endl;
        cout<<"          欢迎使用命令行窗口管理系统,请输入命令   "<<endl;
        cout<<"          命令列表："<<endl;
        cout<<"          1. insert             "<<endl;
        cout<<"          2. remove             "<<endl;
        cout<<"          3. resize             "<<endl;
        cout<<"          4. quit             "<<endl;
        cout<<"==========================================="<<endl;
        //判断指令
        cin>>n;
        switch (n) {
            case 1:
            {
                cout<<"输入方位（top,left,bottom,right)和zorder"<<endl;
                cin>>direction[0]>>direction[1]>>direction[2]>>direction[3]>>zorder;
                cout<<"输入字符"<<endl;
                cin>>str;
                Window w1;
                w1.insert(direction[0], direction[1], direction[2], direction[3], str, zorder);
                //w1.display();
                break;
            }
            case 2:
                //statement
                break;
            case 3:
                //statement
                break;
            case 4:
                exit(0);
            default:
                cout<<"指令错误"<<endl;
                break;
        }
        
    }
};
#endif /* Method_hpp */
