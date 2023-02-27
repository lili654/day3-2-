#include <bits/stdc++.h>//包含了目前c++所包含的所有头文件，是个万能库。
using namespace std;
int c[26];//表示从a到z的出现次数
int main()
{
    string a;
    char max;//出现最多次的字母
    int maxcount=0;//出现最多次的次数
    cin>>a;
    for(int i=0;i<a.length();i++){//遍历字符串如果出现了一次这个字母
        c[a[i]-97]++;//让这个字母对应数组下标的内容自增，表示出现一次，为了将数组下标定在0-26，根据a的asc码为97
    }
    for(int i=0;i<26;i++){
        if(c[i]>maxcount){
            maxcount=c[i];//找出出现次数最多的那个字母下标
            max=i+97;//根据下标找到对应字母
        }
    }
    cout<<max<<endl<<maxcount<<endl;
    return 0;
}

//c[26]定义成count[26]会关键字冲突，因为有些库里有count作为关键字
//int c[26];在主函数内定义会运行错误，因为在主函数哈希表存储为栈，需要加将其初始化为0，放入全局变量即放入堆中，默认初始化为0。
