#include <iostream>
#include <string>  

using namespace std;

/*
字符串声明与定义
字符串拼接 + +=
字符串元素个数，字符访问 size empty []
字符串比较 == != > >= < <=
取出子字符串，查找字符 substr find_first_of find_first_not_of find_last_of find_last_not_of
子串查找，替换，删除，插入 find rfind replace erase insert
交换字符串内容 swap
*/
int main()
{
    // 声明字符串
    string s1;
    string s2;
    string s3;
    // 字符串初始化
    s1 = "hello";
    s2 = "world";
    //字符串拼接 +  +=
    s3 = s1 + s2;
    cout << s3 << endl;
    s3 += s1;
    cout << s3 << endl;
    // 字符串元素个数，字符访问
    cout << "s1.empty(): " << s1.empty() << endl;
    cout << "s1.size(): " << s1.size() << endl;
    cout << "s1[0]: " << s1[0] << endl;
    cout << "s1[2]: " << s1[2] << endl;
    //判断两个字符串比较 == != > < >= <=
    cout << "s1 == s2 " << (s1 == s2) << endl;
    cout << "s1 < s3 " << (s1 < s3) << endl;
    cout << "s2 < s3 " << (s2 < s3) << endl;
    //取出子串
    string s4 = s3.substr(0,5);
    cout << s4 << endl;
    string s5 = s3.substr(5);// 位置5到最后
    cout << s5 << endl;
    // 交换字符串内容
    cout << "befor swap: " << "s3 is " << s3 << " s4 is " << s4 << endl;
    s3.swap(s4);
    cout << "after swap: " << "s3 is " << s3 << " s4 is " << s4 << endl;
    // 查找子串
    int n;  // s4 helloworldhello
    n = s4.find("llo");
    cout << n << endl;
    n = s4.rfind("llo");
    cout << n << endl;
    // 查找字符，可放多个字符组成的字符串，出现其中一个即可
    n = s4.find_first_of("helo"); // 0
    cout << n << endl;
    n = s4.find_first_not_of("helo"); // 5
    cout << n << endl;
    n = s4.find_last_of("helo"); // 14
    cout << n << endl;
    n = s4.find_last_not_of("helo"); // 9
    cout << n << endl;
    //子串替换
    cout << "s1: " << s1 << endl;
    cout << "s1: " << s1.replace(1,3,"abcde",2,4) << endl;//用给定子串的给定位置字符替换原字符串的位置字符
    cout << "s1: " << s1.replace(1,3,"*abc*****") << endl;//用“*abc*****”替换原字符串 1-3 位置的字符
    //子串删除
    s1.erase(1, 2);  //删除子串(1, 2)
    cout << "s1: " << s1 << endl;
    s1.erase(5);  //删除下标5及其后面的所有字符
    cout << "s1: " << s1 << endl;
    //子串插入
    s1.insert(2, "123");    //在下标 2 处插入字符串"123"
    cout << "s1: " << s1 << endl;
    s1.insert(3, s2);       //在下标 2 处插入 s2 
    cout << "s1: " << s1 << endl;
    s1.insert(3, 5, 'X');   //在下标 3 处插入 5 个 'X'
    cout << "s1: " << s1 << endl;
    return 0;


}
