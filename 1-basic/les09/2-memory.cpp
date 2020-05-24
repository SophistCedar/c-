#include <iostream>
using namespace std;
// 一维数组动态内存分配
// 动态分配,数组长度为 m
// int *array=new int[m]；
// 释放内存
// delete [] array;
int main()
{
    int **p;   //二级指针
    int i,j;   //p[4][8]
    //二维数组是按行展开的，先第一行，再第二行 
    //开始分配4行8列的二维数据
    p = new int *[4]; //指针数组，数组内的每个元素指向每一行，四行数据分配内存
    for(i=0;i<4;i++){
        p[i]=new int [8];//指针数组，每一行都存放数组 int [8]
    }
    //初始化赋值
    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }   
    
    //打印数据   
    for(i=0; i<4; i++){
        for(j=0; j<8; j++)     
        {   
            if(j==0) cout<<endl;//每一行数据打印完毕就换行   
            cout<<p[i][j]<<"\t";   
        }
    }   
    //由内到外释放
    //开始释放申请的堆，先释放每一行内的数据   
    for(i=0; i<4; i++){
        delete [] p[i];   
    }
    delete [] p;//再释放多行

    return 0;
}