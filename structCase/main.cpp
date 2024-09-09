//
// Created by dell on 2024-08-13.
//
/**
* 学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带的学生数据。
*/
#include<iostream>
#include <windows.h>
using namespace std;
struct Student{
    string sName;
    double score;

};
struct Teacher{
    string tName;
    Student studentArray[5];
};
void allocateSpace(Teacher tArray[],int len){
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++) {
        tArray[i].tName = "Teacher";
        tArray[i].tName += nameSeed[i];
        for (int j = 0; j < 5; j++) {
            tArray[i].studentArray[j].sName = "Student_";
            tArray[i].studentArray[j].sName += nameSeed[j];

            int random = rand() % 61 + 40;//40 ~ 100(0~60)
            tArray[i].studentArray[j].score = random;
        }

    }
}
void printInfo(Teacher tArray[],int len){
    for (int i = 0; i < len; i++) {
        cout<<"老师姓名:"<< tArray[i].tName <<endl;
        for (int j = 0; j < 5; j++) {
            cout<<"\t老师所辅导学生:"<<tArray[i].studentArray[j].sName
                <<" 分数:"<<tArray[i].studentArray[j].score<<endl;
        }

    }
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    /*随机数种子*/
    srand(time(NULL));
    /*1.创建三名老师数组*/
    Teacher teacherArray[3];
    /*2.通过函数给三名老师信息赋值，并给老师的信息赋值*/
    int len = sizeof (teacherArray)/sizeof (teacherArray[0]);
    allocateSpace(teacherArray,len);
    /*3，打印所有老师及所带学生信息*/
    printInfo(teacherArray,len);
}
