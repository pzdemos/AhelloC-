//
// Created by dell on 2024-08-11.
//
/**
* 结构体属于用户【自定义的数据类型】，允许用户存储不同的数据类型
*/
#include<iostream>
#include <windows.h>
using namespace std;
struct student{
    //成员列表
    string name;
    int age;
    double score;
}s3;//s3顺便创建结构
int main(){
    SetConsoleOutputCP(CP_UTF8);
    /*⭐1.结构体的定义和使用*/
//    /*自定义数据类型，一些内置类型结合组成的一个类型*/ goto 10 line
//    struct student s1;
//    // 通过点给s1 属性赋值
//    s1.name = "照旧";
//    s1.age = 21;
//    s1.score = 100;
//
//    cout<<"姓名:"<<s1.name
//    <<"年龄:"<<s1.age
//    <<"分数"<<s1.score<<endl;

        /*struct 在创建时省略 */
//    student s2 = {"照旧",19,99};
//    cout<<"姓名:"<<s2.name
//        <<"年龄:"<<s2.age
//        <<"分数"<<s2.score<<endl;

//    s3.name = "郭小头";
//    s3.age = 20;
//    s3.score = 100;
//    cout<<"姓名:"<<s3.name
//        <<"年龄:"<<s3.age
//        <<"分数"<<s3.score<<endl;

    /*⭐ 2.结构体数组*/
    student studentArray[3] = {
    {"张三",18,80 },
    {"李四",19,60 },
    {"王五",20,70 }
    };
    /*给结构体数组中的元素赋值*/
    studentArray[1].name = "郭大头";
    studentArray[1].age = 80;
    studentArray[1].score= 60;
    for(int i= 0 ;i< 3;i++){
        cout<<"\t姓名:"<<studentArray[i].name
            <<"\t年龄:"<<studentArray[i].age
            <<"\t分数:"<<studentArray[i].score
        <<endl;
    }
}