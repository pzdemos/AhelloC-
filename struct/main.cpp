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
//    const int sid;
    string name;
    int age;
    double score;
};//}s3顺便创建结构
struct Teacher{
    int tid;
    string name;
    int age;
    student stu;

};
/*打印学生信息函数 ——> 值传递 */
void printStudent(student s);
/**
 * 将函数中的形参改为指针
 * 减少内存空间
 * 不会复制新的副本
 * 传参加入const，防止误修改
 * @param p
 */
/*打印学生信息函数 ——> 地址传递*/
void printStudentPointer(const student * p);
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
//    student studentArray[3] = {
//    {"张三",18,80 },
//    {"李四",19,60 },
//    {"王五",20,70 }
//    };
//    /*给结构体数组中的元素赋值*/
//    studentArray[1].name = "郭大头";
//    studentArray[1].age = 80;
//    studentArray[1].score= 60;
//    for(int i= 0 ;i< 3;i++){
//        cout<<"\t姓名:"<<studentArray[i].name
//            <<"\t年龄:"<<studentArray[i].age
//            <<"\t分数:"<<studentArray[i].score
//        <<endl;
//    }
    /*⭐ 3.结构体指针*/
    /* a.创建结构体变量*/
//    student s = {"张照旧",19,100};
//    /* b.通过指针指向结构体变量*/
//    student * p  = &s;
//    /* c.通过指针访问结构体变量中的数据*/
//    cout<< p->name << " age:"<<p->age<<" score:" << p->score <<endl;

    /**
     * 在结构体中可以定义另一个结构体作为成员，用来解决实际问题
     */
    /*⭐ 4.结构体嵌套结构体*/
    /* a . 创建老师*/
//    Teacher t;
//    t.tid = 532;
//    t.name = "张德发";
//    t.age = 50;
//    t.stu.name ="小郭";
//    t.stu.age =13;
//    t.stu.score =93;
//
//    cout<<" 老师姓名:"<<t.name
//    <<" 老师年龄:"<<t.age
//    <<" 老师辅导学生姓名:"<<t.stu.name
//    <<" 老师辅导学生分数:"<<t.stu.score<<endl;

    /*⭐ 5.结构体做函数参数*/
//    student s  = {"张炸天",19,99};
//
////    cout<< s.name << endl;
//    printStudent(s);
//    cout<<"值传递修改过的年龄"<<s.age <<"岁(未修改实参)"<<endl;
//    printStudentPointer(&s);
//    cout<<"地址传递修改过的年龄"<<s.age <<"岁(已修改实参)"<<endl;

    /*⭐ 6.结构体中const使用场景*/
    /**
     * 用const防止误操作
     */
    student s = {"小黑",21,99};

    printStudentPointer(&s);
}
void printStudent(student s){
    s.age = 100;//修改年龄
    cout<<"学生姓名: "<< s.name << endl;
    cout<<"学生年龄: "<< s.age <<"岁"<<endl;
    cout<<"学生分数: "<< s.score <<"分"<<endl;
}
void printStudentPointer(const student * p){
//    p->sid= 898;// 若定义了const则不可修改
//    p->age = 200;
    cout<<"学生姓名: "<< p->name << endl;
    cout<<"学生年龄: "<< p->age <<"岁"<<endl;
    cout<<"学生分数: "<< p->score <<"分"<<endl;
}