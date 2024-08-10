#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <valarray>
#include "./swap/swap.h"
using namespace std;

int sum(int a,int b){
    int sum = a + b;
    return sum;
}
int max(int a,int b);
//函数常见样式
//1、 无参无返
void test01()
{
    //void a = 10; //无类型不可以创建变量,原因无法分配内存

    cout << "this is test01" << endl;
    //test01(); 函数调用
}

//2、 有参无返
void test02(int a)
{
    cout << "this is test02" << endl;
    cout << "a = " << a << endl;
}

//3、无参有返
int test03()
{
    cout << "this is test03 " << endl;
    return 10;
}

//4、有参有返
int test04(int a, int b)
{
    cout << "this is test04 " << endl;
    int sum = a + b;
    return sum;
}


//#define Day 7  //define 定义宏常量
int main(){
    SetConsoleOutputCP(CP_UTF8);
    //01 输出Hello C++
//    cout<< "Hello C++!!"<<endl;
//    system("pause");

    //02 输出变量
//     int a = 1;
//     cout<<"b="<<a+2<<endl;

     // 03 常量
//     const int mouth = 12;
//
//     cout<<"There are "<<Day<<" days in a week "<<mouth<<" mouths"<<endl;

    // 04 标识符字母数字下划线 数字不能开头 区分大小写
    // 05 取名见名知意
//    int num1 = 2;
//    int num2 = 3;
//    int sum = num1 + num2;
//    cout<<sum<<endl;

    // 06 数据类型--->****** 整型 ****** sizeof
//    cout<<"short类型所占空间为: "<< sizeof(short)<<" byte" <<endl; //2
//    cout<<"int类型所占空间为: "<< sizeof(int)<<" byte" <<endl; //4 byte
//    cout<<"long类型所占空间为: "<< sizeof(long)<<" byte" <<endl;  //Windows为4字节，Linux为4字节(32位)，8字节(64位)
//    cout<<"longlong类型所占空间为: "<< sizeof(long long)<<" byte" <<endl; //8
    // ****** 实型(浮点型) ******
    //默认 输出 六位有效数字
//    float f1 = 3.1415926f;//不加f 默认 双精度
//    double d1 = 3.1415926;
//
//    cout<<"f1="<<f1<<endl; // 所占内存空间  4
//    cout<<"d1="<<d1<<endl;// 所占内存空间  8
//    // 科学计数法
//    float f2 = 3e2;   // 3 * 10 ^2
//    cout<<"f2="<<f2<<endl;
//
//    float f3 = 3e-2; //3 * 0.1 ^ 2
//    cout<<"f3="<<f3<<endl;

//  ****** 字符型****** 单引号 且只能有一个字符
//    char ch = 'a';
//    cout<<"ch="<<ch<<endl;
//    cout<<"The memory size is "<<sizeof(ch)<<" byte"<<endl;
//
//    cout<<"ASCII:"<<(int)ch <<endl; // a:97  A:65

//  ****** 转义字符 ******
//    cout << "Hello world!!" <<endl;
//    // 换行
//    cout << "Hello world!!\n";
//    // 反斜杠
//    cout << "\\"<<endl;
//    // 水平制表符
//    cout << "Hello\tWorld!!"<<endl;
//
//

// ******* 字符串 *******
//    c 风格 字符串  char xx[] = "" 中括号 双引号
//    char str[] = "Hello World!!";
//    cout << str <<endl;

//    c ++ 风格字符串
//    string str2 = "Hello C++";
//    cout<<str2<<endl;

// ******* 布尔型 ********
//   bool flag = true;
//   cout<<"Origin flag is\t"<< flag << endl;
//   flag = false;
//   cout<<"new flag is\t"<< flag <<endl;
//   cout<<"The boolean Type memory size is "<< sizeof(flag)<<" byte!!"<<endl;

//  07 输入
//  整型
//    int a = 0;
//    cout<< "please put int a value "<<endl;
//    cin>>a;
//    cout<< "int a = "<<a<<endl;
//  浮点型
//    float f = 3.14f;
//    cout<<"please put float f value"<<endl;
//    cin>>f;
//    cout<< "float f =" << f <<endl;
// 字符型
//    char ch = 'a';
//    cin>>ch;
//    cout << "char ch ="<<ch<<endl;
// 字符串
//    string str = "Hello";
//    cout<<"please input str value:"<<endl;
//    cin>>str;
//    cout<< "字符串str = "<<str <<endl;
// 布尔型
//    bool flag = true;
//    cout<<"please input bool flag value:"<<endl;
//    cin>>flag;
//    cout<<"flag value is "<< flag <<endl;

// 运算符
    /**
     * 加减乘除
     */
//     int a1 = 10;
//     int b1 = 3;
//
//     cout<< a1 + b1 <<endl;
//     cout<< a1 - b1 << endl;
//     cout<< a1 * b1 << endl;
//     cout<< a1 / b1 << endl; // 3 默认去除小数
//
//     cout<< 10/20 << endl; // 0

//     cout<< 10/0 <<endl;  除数不为 0

//       cout<< 0.5/0.253 <<endl; // 1.97628


/**
 * 取模运算
 * 小数不可做(只有整型)，除数不能为 0
 */

//  cout << 10 % 202 << endl; // 10

/**
 * 前置后置递增
 * 前置后置递减
 */
    // 1. 前置递增
//    int a = 10;
//    ++a;
//    cout<< "a = "<< a << endl;

    // 2. 后置递增
//    int b = 10;
//    b++;
//    cout<< "b = "<< b <<endl;

    // 3. 区别
//    int a=  1;
//    cout<< a++ <<endl;
//    cout<< ++a<<endl;
    /**
     * 前置递增： 先让变量 +1 然后进行表达式运算
//     */
//    int a2 = 10;
//    int b2 = ++a2 * 10;
//    cout<< "a2 = "<< a2 <<endl;
//    cout<< "b2 = "<< b2 <<endl;//100
    /**
     * 后置递增： 先进行表达式运算 然后 变量 +1
     */
//
//    int a3 = 10;
//    int b3 = a3++ * 10;
//    cout<< "a3 = "<< a3 <<endl;
//    cout<< "b3 = "<< b3 <<endl;//100

/**
 * 前置后置递减
 */
//    int a = 2;
//    int b = a-- * 5; // ---> a = 2
//    int d = --a * 5;  // ---> a = 2 - 1 - 1 = 0
//    cout<< b <<endl; // 10
//    cout<< d <<endl; // 0

/**
 *  赋值运算符
 */
//    int a = 1;
//    a = 10;
//    cout<< "a = "<< a << endl;
//    a += 2;
//    cout<< "a += 2 ===>"<< a << endl; // 12
//    a -= 2;
//    cout<< "a -= 2 ===>"<< a << endl; // 10
//    a *= 2;
//    cout<< "a *= 2 ===>"<< a <<endl; //20
//    a /= 3;
//    cout << "a /= 2 ===>"<< a << endl; //6
//    a %= 4;
//    cout << "a %= 4 ===>"<< a << endl;//2

/**
 * 比较运算符
 */

//     int a = 10;
//     int b = 20;

//     cout<< (a==b) <<endl;//0
//     cout<< (a!=b) <<endl;//1
//     cout<< (a>b) <<endl;//0
//     cout<< (a<=b) <<endl;//1

/**
 * 逻辑运算符
 */
//        //非 ！
//        int a = 10;
//        cout<< !!a <<endl;
//
//        // 逻辑与
//        int b = 10;
//        int c = 0;
//        cout<< (b && c) <<endl;
//
//        // 逻辑或
//        cout<< (a || c)<<endl;


/**
 * 程序流程结构   顺序结构 选择结构 循环结构
 */
//    cout<<"请输入一个分数(0~100):"<<endl;
//    int a = 0;
//    cin>>a;
//    if (a >= 60)
//    {
//        if(a>90){
//            cout<<"恭喜鸡哥!优秀"<<endl;
//        }
//        cout<<"恭喜鸡哥!及格"<<endl;
//    }else if(a < 60)
//    {
//        cout<<"不及格"<<endl;
//    }else
//    {
//        cout<<"输入有误"<<endl;
//    }
//
//    int weightA = 0, weightB = 0, weightC = 0;
//    cout << "输入三只小猪重量" << endl;
//    cin >> weightA >> weightB >>weightC;
//    if (weightA > weightB) {
//        if (weightA > weightC) {
//            cout << "A最重" << endl;
//        } else {
//            cout << "c最重" << endl;
//        }
//    } else {
//        if (weightB > weightC) {
//            cout << "b最重" << endl;
//        } else {
//            cout << "c最重" << endl;
//
//        }
//    }
//

/**
 * 三目运算符 返回的是变量、可以继续赋值
 */
//    int a = 10;
//    int b = 20;
//    cout<<(a>b?a:b)<<endl;


/**
 * switch 语句
 */

//    int day = 0;
//    cout<<"请输入1~7数字"<<endl;
//    cin>>day;
//    switch (day) {
//        case 1:
//            cout<<"星期一"<<endl;
//            break;
//        case 2:
//            cout<<"星期二"<<endl;
//            break;
//        case 3:
//            cout<<"星期三"<<endl;
//            break;
//        case 4:
//            cout<<"星期四"<<endl;
//            break;
//        case 5:
//            cout<<"星期五"<<endl;
//            break;
//        case 6:
//            cout<<"星期六"<<endl;
//            break;
//        case 7:
//            cout<<"星期天"<<endl;
//            break;
//        default:
//            cout<<"输入有误！！"<<endl;
//            break;
//    }
/**
 *      循环结构
 */
//        int i = 0;
//
//        while(i<=10){
//            cout<<i<<endl;
//            i++;
//        }


// 随机生成一个1~100的数字
    srand(time(0)); /*设置随机数种子,利用当前系统时间*/
    /**
     * 然后使用rand() % 100 + 1来生成1到100范围内的随机整数，
     * 其中% 100用于获取0到99之间的数，之后加1使范围变为1到100。
     * 最后，程序输出生成的随机数。
     */
//    int num =rand() % 100 + 1 ;
//    cout<< "猜数字：请输入1~100之中数字"<<endl;
////    cout<<num<<endl;
//    int guessNum = 0;
//    int chanceNum = 7;
//    while(chanceNum != 0){
//        cin>>guessNum;
//        if(num<guessNum){
//            cout<<"所猜数字过大\n";
//        }
//        else if(num>guessNum){
//            cout<<"所猜数字过小\n";
//        }
//        else{
//            cout<<"恭喜胜利"<<endl;
//            break;
//        }
//        chanceNum--;
//        if(chanceNum == 0){
//            cout<<"机会用尽"<<endl;
//        }
//    }

/**
 * do...while()
 */
//     int i = 0;
//     do{
//         cout<<i<<endl;
//         i++;
//     }
//     while(i<10);
//     while(i);
//    while(i){
//        cout<<i<<endl;
//        i++;
//    }
/**
 * 求所有三位数的水仙花数
 */
        //百位 ？/100
        //十位 ？%100/10
        // 个位 ？%10
        //#include <valarray>
//        cout<<(153%100/10)<<endl;
//        int num = 100;//        cout<<pow(num,2)<<endl;
//
//        do{
//            int a = 0; // 百位
//            int b = 0;
//            int c = 0;
//            a = num/100; // 百位
//            b = num%100/10;
//            c = num%10;
////            if(pow(num/100,3)+ pow(num%100/10,3)+ pow(num%10,3) == num){
//            if(a*a*a+b*b*b+c*c*c == num){
//                cout<<"--->"<<num<<endl;
//            }
//            num ++;
//        }
//        while(num < 1000);

///**
// * for 循环
// */
////    for (int i = 0; i < 10; i++) {
////        cout<< i<<endl;
////    }
//    for (int num = 1; num < 101; num++) {
////        int g=0,s=0,j=0;
////        g = num%10;//个位
////        s = num/10;//十位
////        j = num%7;//倍数
////        if(g==7||s==7||j==0){
////            cout<<"敲桌子砰砰砰！！"<<endl;
////        }else{
////            cout<<num<<endl;
////        }
//        if(num%10 ==7||num/10==7||num%7==0){
//            cout<<"敲桌子砰砰砰！！"<<endl;
//            continue;
//        }
//        cout<<num<<endl;
//    }


/**
 * 嵌套循环
 */
 // 方形
//    for (int i = 0; i < 10; i++) {
//        for (int j = 0; j < 10; j++) {
//            cout<<"*  ";
//        }
//        cout<<endl;
//    }
// 倒三角
//    for (int i = 10; i > 0; i--) {
//        for (int k = 10; k > i; k--) {
//            cout<<" ";
//        }
//        for (int j = 0; j < i; j++) {
//            cout<<"*  ";
//        }
//        cout<<endl;
//    }
// 九九乘法表
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout<<j<<"*"<<i<<"="<<(i*j)<<" ";
//        }
//        cout<<endl;
//    }

/**
 * 跳转语句
 */
    //1.switch
//    cout<<"请选择副本难度:"<<endl;
//    cout<<"1.普通"<<endl;
//    cout<<"2.中等"<<endl;
//    cout<<"3.困难"<<endl;
//
//    int select = 0;//创建选择结构的变量
//    cin>>select;
//    switch (select) {
//        case 1:
//            cout<<"So Easy!!!--->";
//            break;
//        case 2:
//            cout<<"fighting Cool!!--->middle";
//            break;
//        case 3:
//            cout<<"come on!!--->hard";
//            break;
//        default:
//            cout<<"Input Value Error";
//            break;
//    }
    //2.循环
//    for (int i = 0; i < 10; i++) {
//
//        //如果 i==5 退出
//        if(i==5){
////            continue;
//            break;
//        }
//        cout<<i<<endl;
//
//    }
    //3.嵌套循环
//    for (int i = 0; i < 10; i++) {
//        for (int j = 0; j < 10; j++) {
//            if(j==5){
//                break;
//            }
//            cout<<" * ";
//        }
//        cout<<endl;
//    }

/**
 * continue
 */
//    for (int i = 0; i <= 100 ; i++) {
//        //奇数输出 0到100
//        if(i%2==0){
//            continue; //筛选条件，指向到此，不执行之后的语句，执行下一次循环
//        }
//        cout<<i<<endl;
//    }

/**
 * goto  类似 html a标签 跳转指定标记
 */
//    cout<<"1.hello"<<endl;
//    cout<<"2.hello"<<endl;
//    goto FLAG;
//    cout<<"3.hello"<<endl;
//    cout<<"4.hello"<<endl;
//    FLAG:
//    cout<<"5.hello"<<endl;

/**
 * 数组 ：一个集合，里面存放相同类型的数据元素
 */
//连续的内存空间，数组中每个元素都是相同数据类型
    /**
    * 1. 数据类型  数组名[ 数组长度 ];
    * 2. 数据类型  数组名[ 数组长度 ] = { 值1，值2 ...};
    * 3. 数据类型  数组名[ ] = { 值1，值2 ...};自动计算数组长度，若先定义，值不够则补零
     */

//    int arr[5];
//    arr[0] = 10;
//    arr[1] = 20;
//    arr[2] = 30;
//    arr[3] = 40;
//    arr[4] = 50;
//    cout<<arr[4]<<endl;

//    int arr2[5] = {10,20,30,40,50};
////    for (int i = 0; i < 5; i++) {
////        cout<<arr2[i]<<endl;
////    }
//    for (int i : arr2) {
//        cout<<i<<endl;
//    }

    //自动判断长度
//    int arr3[] = {1,2,3,4,5};
//    for(int i: arr3){
//        cout<<i<<endl;
//    }


    /**
     * 一维数组数组名
     */
// 1.可以统计整个数组在内存中的长度
// 2.可以获取数组在内存中的首地址
// 3.数组名不可修改
//    int arr[5] = {10,20,30,40,50};
//    cout<<"整个数组占用的内存空间："<<sizeof(arr)<<endl;
//    cout<<"每个元素占用的内存空间："<<sizeof(arr[0])<<endl;
//    cout<<"数组的元素个数为："<<sizeof(arr)/sizeof(arr[0])<<endl;
//
//    cout<<"数组首地址为:"<<arr<<endl;
//    cout<<"数组中第一个元素地址为:"<<&arr[1]<<endl;  //与上述首个地址差四个字节

/**
 * ⭐五只小猪称体重 ⭐
 * 设置一个为0的max值，每次循环数只要比max即更新给max
 */
//    int arr[] = {300,350,200,400,250};
//    int max = 0;
//    for (int i : arr) {
//        if(max<i){
//            max = i;
//        }
//    }
//    cout<<"最重的小猪为"<<max<<"斤"<<endl;


/**
 * 数组逆置  将 [1,3,2,5,4] ===> [4,5,2,3,1]
 */

//    int arr[] = {1,3,2,5,4};
//
//    int start = 0;//起始下标位置
//    int end = sizeof(arr)/sizeof(arr[0])-1;//结束下标位置
//
//    while(start<end){
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//
//        start ++;
//        end--;
//    }
//    for(int i :arr){
//        cout<<i<<endl;
//    }

/*默*/
//        int str[] = {1,2,5,8,1};
//
//        int start = 0;
//        int end = sizeof(str)/sizeof(str[0])-1;
//        while(start<end){
//            int temp;
//            temp = str[start];
//            str[start] = str[end];
//            str[end] = temp;
//            start++;
//            end--;
//        }
//        for(int i: str){
//            cout<<i<<endl;
//        }

/**
 * ⭐冒泡排序实现升序序列⭐
 */
//    int ar[] = {4,2,8,0,5,7,1,3,9};
//    /*排序前*/
//    cout<<"排序前:";
//    for (int i : ar) {
//        cout<<i<<" ";
//    }
//    cout<<"\n冒泡排序中:";
//    /*元素个数*/
//    int count = sizeof(ar)/sizeof(ar[0]);
//    //总共排序轮数为 元素个数 -1
//    for(int i = 0;i < count-1; i++){
//        //内层循环对比次数 元素个数 - 排序轮数 -1
//        for (int j = 0; j < count-i-1; j++) {
//            //如果第一个元素比第二个元素大则交换元素
//            if(ar[j]>ar[j+1]){
//                int tem = ar[j];
//                ar[j] = ar[j+1];
//                ar[j+1] = tem;
//            }
//
//        }
//    }
//    for (int i : ar) {
//        cout<<i<<" ";
//    }

/**
 * 二维数组
 */
/*第一种定义方式*/
//    int arr[2][3];
//    arr[0][0]= 1;
//    arr[0][1]= 2;
//    arr[0][2]= 3;
//    arr[1][0]= 4;
//    arr[1][1]= 5;
//    arr[1][2]= 6;
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout<<arr[i][j]<<endl;
//        }
//
//    }
/*第二种定义*/
//    int arr2[2][3]={
//            {1,2,3},
//            {4,5,6},
//    };
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout<<arr2[i][j]<<" ";
//        }
//        cout<<endl;
//    }
/*第三种*/
//    int arr3[2][3] = {1,2,3,4,5,6};
    /*第四种*/
//    int arr4[][3] = {1,2,3,4,5,6};

//    int arr[2][3]={
//            {1,2,3},
//            {4,5,6},
//    };
//    cout<<"二维数组占用内存空间:"<<sizeof (arr)<<endl;
//    cout<<"二维数组第一行占用内存空间:"<<sizeof (arr[0])<<endl;
//    cout<<"二维数组第一个元素占用内存空间:"<<sizeof (arr[0][0])<<endl;
//    cout<<"二维数组行数:"<<sizeof (arr)/sizeof (arr[0])<<endl;
//    cout<<"二维数组列数:"<<sizeof (arr[0])/sizeof (arr[0][0])<<endl;
//
//    cout<<"二维数组首地址"<<arr<<endl;
//    cout<<"二维数组第一行首地址"<<arr[0]<<endl;
//    cout<<"二维数组第二行首地址"<<arr[1]<<endl;
//    cout<<"二维数组第一个元素首地址"<<&arr[0][0]<<endl;

    /**
     * 二维数组成绩单
     */
//     int scores[3][3] = {
//             {100,100,100},
//             {90,50,100},
//             {60,70,80}
//     };
//    string stu_s[3] = {"张三","李四","王五"};
////    cout<<stu_s[0]<<endl;
//    for (int i = 0; i < 3; i++) {
//        cout<<stu_s[i];
//        int sum = 0;
//        for (int j = 0; j < 3; j++) {
//            cout<<"\t"<<scores[i][j]<<" ";
//            sum += scores[i][j];
//        }
//        cout<<"--->"<<sum<<endl;
//        cout<<endl;
//    }


//*函数*/
//    cout<<sum(1,2)<<endl;
//
//    test01();//无参无返
//    test02(3);//有参无返
//    int y = test03();
//    cout<<"无参有返"<<y<<endl;
//    int x = test04(1,2);
//    cout<<"有参有返"<<x<<endl;


/*函数声明*/

    int maxValue = max(3,99);
    cout<<"比较两个值较大的是:"<<maxValue<<endl;

    swap(3,5);
    X2(9);





//    system("pause");

    return 0;

}
int max(int a,int b){
    return a>b?a:b;
}
