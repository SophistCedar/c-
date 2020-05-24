#include <iostream>
using namespace std;

int main()
{   
    int i,j,k;   // p[2][3][4]
    
    int ***p;//三维数组
    p = new int **[2];//先分配一维的 2
    for(i=0; i<2; i++)//此处是2
    { 
        p[i]=new int *[3];//再分配二维的 3 
        for(j=0; j<3; j++)//此处从3开始
            p[i][j]=new int[4]; 
    }
    
    //输出 p[i][j][k] 三维数据
    for(i=0; i<2; i++)   
    {
        for(j=0; j<3; j++)   
        { 
            for(k=0;k<4;k++)
            { 
                p[i][j][k]=i+j+k;
                cout<<p[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    // 释放内存，由内到外
    for(i=0; i<2; i++) 
    {
        for(j=0; j<3; j++) 
        {   
            delete [] p[i][j];   
        }   
    }       
    for(i=0; i<2; i++)   
    {       
        delete [] p[i];   
    }   
    delete [] p;  
    
    return 0;
}