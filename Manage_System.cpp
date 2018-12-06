//
//  Manage_System.cpp
//  Windows Mangement System
//
//  Created by 赵楚涵 on 2018/12/5.
//  Copycoordinates[3] © 2018 赵楚涵. All coordinates[3]s reserved.
//

#include "Manage_System.hpp"
Manage_System::Manage_System(){//创建一个巨大的二维向量作为边界，初始值为‘ ’
        //初始化Mang_vector
        for(int i=0;int<Mang_vector.size;++i)
            Mang_vector[i].resize(MAXSIZE);
        for(int i=0;i<Mang_vector.size;i++){
            for(int j=0;j<Mang_vector[i].size;j++)
                Mang_vector[i][j]=' ';
        }
}
//重载运算符+，使得Manage_System的二维向量Mang_vector拷贝添加新Window对象的Str
vector<vector<char> > Manage_System::operator+(Window w1){
    Manage_System T;//  Mang_vector=Mang_vector+w1
    //Panduan(this,w1);判断z-order,改变字符向量
    //拷贝w1中的Str向量到Mang_vector
    for(int i=0;i<it1.size;i++){
        for(int j=0;i<it1[i].size;j++)
            T.Mang_vector[w1.top+i][w1.left+j]=w1.Str[i][j];}
    return T.Mang_vector;
}

void Manage_System::Panduan(Window oldW,Window newW){
    if (newW.z_order > oldW.z_order){
        //新窗口左上角和旧窗口右下角重叠
        if(newW.coordinates[0]<oldW.coordinates[2] && newW.coordinates[1]<oldW.coordinates[3]){
            int temp1=newW.coordinates[0]-oldW.coordinates[2]+1;//重叠行数
            int temp2=newW.coordinates[1]-oldW.coordinates[3]+1;//重叠列数
            for(int i=0; i<temp1;++i) //例子：新10 旧8 temp2=3; oldW.length-temp1=长度-3；oldW.length-temp1+i=8,9,10,对应vector里的7,8,9
                oldW.Str[oldW.length-temp1+i-1].resize(oldW.width-temp2);
        }
        //新窗口右下角和旧窗口左上角重叠
        if(newW.coordinates[2]>oldW.coordinates[0] && newW.coordinates[3]>oldW.coordinates[1]){
            int temp1=newW.coordinates[2]-oldW.coordinates[0]+1;
            int temp2=newW.coordinates[3]-oldW.coordinates[1]+1;
            for(int i=0; i<temp1;++i)
                oldW.Str[oldW.length-temp1+i-1].resize(oldW.width-temp2);
        }
    }
    if (newW.z_order<oldW.z_order){
        //新窗口左上角和旧窗口右下角重叠
        if(newW.coordinates[0]<oldW.coordinates[2] && newW.coordinates[1]<oldW.coordinates[3]){
            int temp1=oldW.coordinates[2]-newW.coordinates[0]+1;
            int temp2=newW.coordinates[1]-oldW.coordinates[3]+1;
            for(int i=0; i<temp1;++i)
                newW.Str[newW.length-temp1+i-1].resize(newW.width-temp2);
        }
        //新窗口右下角和旧窗口左上角重叠
        if(newW.coordinates[2]>oldW.coordinates[0] && newW.coordinates[3]>oldW.coordinates[1]){
            int temp1=newW.coordinates[2]-oldW.coordinates[0]+1;
            int temp2=newW.coordinates[3]-oldW.coordinates[1]+1;
            for(int i=0; i<temp1;++i)
                newW.Str[newW.length-temp1+i-1].resize(newW.width-temp2);
        }
    }
}

void Manage_System::Display(){ //打印输出二维向量
        vector<vector<char> >::iterator it1;
        vector<char>::iterator it2;
        for(it1=Mang_vector.begin();it1!=Mang_vector.end(),it1++){
            for(it2=it1.begin();it2!=t1.end();it2++)
                cout<<*t2;
        }
}

void Manage_System::insert(Window &w){
    //对已放入的Window对象逐个与新的Window对象w 进行zorder判断
    if(WinIn.size>2){
        for(int i=0;i<T.WinIn.size;++i)
            Panduan(T.WinIn[i],w1);
    }

    Mang_vector=Mang_vector+w;
    WinIn.push_back(w);
}

void remove(Window &w){
    //找到WinIn中的匹配项
    //对zorder小于w的重新逐个resize 
    //从WinIn中删除w
    //Mang_vector?(新建二维向量，for来insert WinIn) ??能恢复WIndow不?

}
void resize(Window &w, const int top,const int left,const int bottom, const int right){
     //找到WinIn中的匹配项
     //resize
     //对zorder小于w的重新逐个resize
     //Mang_vector?(新建二维向量，for来insert WinIn)
}