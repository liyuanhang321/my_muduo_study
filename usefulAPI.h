
//C

// C++
#include <iostream>
// using namespace std;

//----------------------------------------------------
#include <pthread.h>


//----------------------------------------------------
#include <string.h>
//memset
void myzero(void *a, size_t n) { memset(a, 0, n); }


//----------------------------------------------------
// __DATE__ 当前日期，一个以 “MMM DD YYYY” 格式表示的字符串常量。

// __TIME__ 当前时间，一个以 “HH:MM:SS” 格式表示的字符串常量。

// __FILE__ 这会包含当前文件名，一个字符串常量。

// __LINE__ 这会包含当前行号，一个十进制常量。

// __STDC__ 当编译器以 ANSI 标准编译时，则定义为 1；判断该文件是不是标准 C 程序。

// __FUNCTION__ 程序预编译时预编译器将用所在的函数名，返回值是字符串;