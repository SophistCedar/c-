#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";
 
    // 清理并关闭
    // 终止程序  
   exit(signum);  
 
}

int main ()
{
    // 注册信号 SIGINT 和信号处理程序
    // 不管您想在程序中捕获什么信号，您都必须使用 signal 函数来注册信号，并将其与信号处理程序相关联。
    // signal 函数，用来捕获突发事件。
    // 当捕获 SIGINT 信号的时候，调用signalHandler信号处理程序
    signal(SIGINT, signalHandler);  
    // 按键 ctrl+C 进行中断，
    while(1){
       cout << "Going to sleep...." << endl;
       sleep(1);
    }

    return 0;
}