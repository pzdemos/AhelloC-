//
// Created by dell on 2024-08-10.
//
#include<iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
//    cout<<"开始冒泡排序:"<<endl;
//    int arr[] = {4,3,5,9,8,7,6,2,10,1};
//    int count = sizeof (arr)/sizeof (arr[0]);
//    for (int i = 0; i < count ; i++) {
//        for (int j = 0; j < count - i -1; j++) {
//            if(arr[j]>arr[j+1]){
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//    for (int k : arr) {
//        cout<<k<<" ";
//    }

   /**
    *  指针 的定义与使用
    */
    /*⭐1.定义指针*/
//    int a = 10;
//    /*指针定义的语法 数据类型 * 指针变量名 */
//    int * p ;
//    /*让指针记录变量a的地址*/
//    p = &a;
//    cout<< "a的地址为：" << &a <<endl;
//    cout<< "指针 p ：" << p <<endl;
//
//    /*⭐2.使用指针*/
//    /*可以通过解引用(*p)的方式来找到指针指向的内存*/
//    *p = 1000;
//    cout<<"a = "<< a <<endl;
//    cout<<"*p = "<< *p <<endl;

    /*⭐ 3.指针所占内存空间*/
    /*【32位操作系统】——> (4) byte ,【64位操作系统】——> (8) byte*/
//    int a = 10;
////    int *p;
////    p = &a;
//    int *p = &a;
//    cout<<"*p = "<< *p <<endl; //8
//    cout<<"sizeof (int *) = "<<sizeof (p)<<endl; //8
//    cout<<"sizeof (int *) = "<<sizeof (int *)<<endl;//8
//    cout<<"sizeof (float *) = "<<sizeof (float *)<<endl;//8
//    cout<<"sizeof (double *) = "<<sizeof (double *)<<endl;//8
//    cout<<"sizeof (char *) = "<<sizeof (char *)<<endl;//8

    /*⭐ 4.空指针和野指针*/
    /*1.空指针*/
    /**
     * 定义：指针变量指向内存中编号为0的空间
     * 用途：初始化指针变量
     * 注意:空指针的内存不可以访问
     */
     /* 0 ~ 255 之间的内存编号是系统占用的，因此不可以访问 */
//     int *p = NULL;
//     *p = 100;/*解引用  ❗不可访问*/
    /*2.野指针*/
//    int *p = (int *)0x1100;/*避免操作野指针❗不可访问*/
//    cout<<*p<<endl;

    /*⭐ 5.const修饰指针、常量*/
//    int a = 10;
//    int b = 10;
//    /*常量指针——>指针【指向的值】不能改，指针的【指向】可改*/
//    const int * p = &a;
////    *p = 20;// ❌ 错误
////    p = &b; // ✅ 正确
//
//    /*指针常量——>指针【指向】不能改,指针【指向的值】可改*/
//    int * const p2 = &a;
////    *p2 = 100; //✅ 正确
////    p2 = &b;//❌ 错误
//
//    /*const修饰的指针和常量——>都不可改*/
//    const int * const p3 = &a;
////    *p2 = 100; //❌ 错误
////    p2 = &b;//❌ 错误

    /*⭐ 6.指针和数组*/
    /*利用指针访问数组中的元素*/
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    /*一般方式*/
////    cout<<"第一个元素为:"<< arr[0]<<endl;
//    int *p = arr;/*arr就是数组首地址*/
//    cout<<"指针访问第一个元素为:"<< *p <<endl;
//    p++;//让指针向后偏移四个字节
//    cout<<"指针访问第二个元素为:"<< *p <<endl;
//    /*利用指针遍历数组*/
//    int *p2 = arr;
//    for(int i=0;i<10;i++){
//        cout<< *p2 <<endl;
//        p2++;
//    }


}