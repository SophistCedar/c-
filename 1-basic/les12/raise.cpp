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
    int i = 0;
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);  //捕获突发事件，signalHandler进行信号处理
 
    while(++i){
       cout << "Going to sleep...." << endl;
       if( i == 3 ){
          raise( SIGINT);//生成信号
       }
       sleep(1);
    }
 
    return 0;
}