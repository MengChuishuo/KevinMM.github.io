//
//  main.cpp
//  1
//
//  Created by 孟垂硕 on 2023/2/28.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"请输入三个任意大小的整数"<<endl;
    cin>>a>>b>>c;
    int min;
    min=a;
    if(min>b)
        min=b;
    if(min>c)
        min=c;
    cout<<"输入的整数中最小值为："<<min<<endl;
    return 0;
    
}
