//
//  Manage_System.cpp
//  Windows Mangement System
//
//  Created by 赵楚涵 on 2018/12/5.
//  Copycoordinates[3] © 2018 赵楚涵. All coordinates[3]s reserved.
//

#include "Manage_System.hpp"

//重载运算符+，使得Manage_System的二维向量Mang_vector拷贝添加新Window对象的Str
vector<vector<char> > Add(Window w1){
    //Panduan(this,w1);判断z-order,改变字符向量
    //拷贝w1中的Str向量到Mang_vector
    Manage_System ms;
    for(int i=0;i<w1.length;i++){
        for(int j=0;j<w1.width;j++)
            ms.Mang_vector[w1.coordinates[0]+i][w1.coordinates[1]+j]=w1.Str[i][j];} //有问题
    return ms.Mang_vector;
}


void Manage_System::Display(){ //打印输出二维向量
        for(int i=0;i<Mang_vector.size();++i){
            for(int j=0;j<Mang_vector[i].size();++j)
                cout<<Mang_vector[i][j];
        }
}

void Manage_System::insert(Window &w){
    //对已放入的Window对象逐个与新的Window对象w 进行zorder判断
    WinIn.push_back(w);
    if(WinIn.size()>1){
        //从小到大排序  
       sort(WinIn.begin(),WinIn.end(),Cmp());
    }
    
    for(int i = 0; i < WinIn.size(); i++)
    {
        Mang_vector= Add(WinIn[i]);
    }
}

void Manage_System::remove(Window &w){
    //找到WinIn中的匹配项
    //从WinIn中删除w
    //Mang_vecto(新建二维向量，for来insert WinIn)->WinIn ??能恢复WIndow不?
    vector<Window>::iterator it;
    it = find(WinIn.begin(),WinIn.end(),w);//查找元素
    if(it==WinIn.end())                    //判断元素是否存在
        cout<<"窗口不存在"<<endl;
    else{
        for(it=WinIn.begin();it!=WinIn.end();){
            if(*it==w)
                it=WinIn.erase(it);
            else
                ++it;
        }
    }
}
void Manage_System::resize(Window &w, const int newtop,const int newleft,const int newbottom, const int newright){
     //找到WinIn中的匹配项
     //resize
     //对zorder小于w的重新逐个resize
     //Mang_vector?(新建二维向量，for来insert WinIn)
    vector<Window>::iterator it;
    it = find(WinIn.begin(),WinIn.end(),w);//查找元素
    if(it==WinIn.end())                    //判断元素是否存在
        cout<<"窗口不存在"<<endl;
    else{
        remove(w);
        w.Rsize(newtop, newleft, newbottom, newright);
        insert(w);
    }
}

bool Cmp::operator()(Window &w1, Window &w2){
    if(w1<w2){
        return true;}
    return false;
}
/*void Manage_System::Sort(){
    //根据WinIn的zorder对WinIn排序
    
}
*/
