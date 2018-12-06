//
//  main.cpp
//  Windows Mangement System
//
//  Created by 赵楚涵 on 2018/11/13.
//  Copyright © 2018 赵楚涵. All rights reserved.
//

#include <iostream>
#include "Window.hpp"
#include "Method.hpp"
#include "Manage_System.hpp"

short comp(const Window &w1,const Window &w2){
    return w1.z_order>w2.z_order;
}
void Sort(const Window &w1,const Window &w2){
    sort(w1,w2,comp);
}


int main() {
    Manage_System s;
    
    while(1){
        Method m;//改进
        s.Display();
    }
    
    
    return 0;
}
