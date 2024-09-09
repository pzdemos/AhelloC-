//
// Created by dell on 2024-08-15.
//
/**
 * 设计一个英雄的结构体，包括成员姓名，年龄，性别;
 * 创建结构体数组，数组中存放5名英雄。
   通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
 */
 /**
* 		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
  */
#include<iostream>
#include<windows.h>
using namespace std;
struct Hero{
    string name;
    int age;
    string gender;// 1 男 0 女
};
void allocateSpace(Hero * heroArr,int len){
//    for (int i = 0; i < len; i++) {}
//        cout<<heroArr[i].age<<endl;
        for (int j = 0; j < len-1; j++) {
            for (int k = 0; k < len- j - 1; k++) {
                if(heroArr[k].age>heroArr[k+1].age){
                    Hero temp = heroArr[k];
                    heroArr[k] = heroArr[k+1];
                    heroArr[k+1] = temp;
                }
            }
        }

}
void printHero(Hero heroArr[] ,int len){
    for (int i = 0; i < len; i++) {
        cout<<heroArr[i].name
        <<","<<heroArr[i].age
        <<","<<heroArr[i].gender<<endl;
    }
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    Hero heroArray[5] = {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"},
    };
    int len = sizeof (heroArray)/sizeof (heroArray[0]);
    allocateSpace(heroArray,len);
    printHero(heroArray,len);
    Hero oneTop = {"小黑",90,"男"};
    Hero *p = &oneTop;
    cout<<"True Hero is : " <<p->name<<endl;
}