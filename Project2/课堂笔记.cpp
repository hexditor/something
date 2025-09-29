//保留小数的方法:
#include <iomanip>
#include <iostream>
using namespace std;
    int main()
{

    double k = 0.123456;
    //变量必须是浮点型
    //前三种作用于全局且需要头文件，最后一种只作用于一个变量
    cout << setiosflags(ios::fixed) << setprecision(2) << endl;

    cout.setf(ios::fixed);
    cout << setprecision(2) << endl;

    cout << fixed << setprecision(2) << endl;


    printf("%.3f", k);
//为了防止程序报错，也可以加头文件<studio.h>
//如果想使用科学计数法，要用printf("%.3e", k);
}


//指针:
/*
1.取址符:&
double <<a;
cout <<&a; //会输出a的地址(也叫指针)
2.间址符:*
cout <<*(&a);
//表示变量a的地址所指的对象，即变量a
3.整型指针: int *
int *a;    //此时a储存的是地址
int p=55;
a=&p;      //此时a储存的是p的地址
cout <<a;  //输出p的地址
cout <<*a; //输出"55"
a++;
//将指针右移一位，此时a储存p后侧一位的内存的地址
//同理，还有double *a; 浮点型指针
4.空指针
char *s=0;
double *p=NULL;
*/

//引用: *
/*
语法: 类型 &引用名 = 对象名;
int a;
int &A=a;
//此时变量a有了两个名字，a和A
输出A，与输出a效果一致
*/

//常量
/*
1.  const int p = 1;    //锁值
2.  const int *p;       //锁值
    int const *p;       //锁值
3.  int *const p;       //锁地址
4.  const int *const p; //锁值和地址
    int const *const p; //锁值和地址

*/

//进制
/*
int a =10
cout<<oct<<a; //输出八进制数12
cout<<dec<<a; //输出十进制数10
cout<<hex<<a; //输出十六进制数a
*/

//数学
/*
需头文件#include <cmath>
平方根      sqrt()
绝对值      abs()
浮点型绝对值 fabs()
幂运算      pow (底数, 指数)
*/







