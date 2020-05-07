#include <iostream>
using namespace std;
 
int main( )
{
    // 标准输出流（cout）
    char strout[] = "Hello C++";
    cout << "Value of str is : " << strout << endl;

    // 标准输入流（cin）    
    char name[50];
    cout << "请输入您的名称： ";
    cin >> name;
    cout << "您的名称是： " << name << endl;

    // 标准错误流（cerr）
    char strerr[] = "Unable to read....";
    cerr << "Error message : " << strerr << endl;

    // 标准日志流（clog）
    char strlog[] = "Unable to read....";
    clog << "Error message : " << strlog << endl;
}