/*
Farmer John 的奶牛正在 "mooZ" 视频会议平台上举行每日集会。她们发明了一个简单的数字游戏，为会议增添一些乐趣。
Elsie 有三个正整数 A、B和 C（A≤B≤C）。这些数字是保密的，她不会直接透露给她的姐妹 Bessie。她告诉 Bessie 七个范围在 1…109
之间的整数（不一定各不相同），并宣称这是 A、B、C、A+B、B+C、C+A和 A+B+C的某种排列。

给定这七个整数，请帮助 Bessie 求出 A、B和 C。可以证明，答案是唯一的。

输入格式（从终端/标准输入读入）：
输入一行，包含七个空格分隔的整数。
输出格式（输出至终端/标准输出）：
输出 A、B和 C，用空格分隔。
输入样例：
2 2 11 4 9 7 9
输出样例：
2 2 7
测试点性质：
测试点 2-3 满足 C≤50。
测试点 4-10 没有额外限制。
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    //七个数A、B、C、A+B、B+C、C+A和 A+B+C
    int A,B,C;
    int a[7];
    
    for(int i = 0 ; i < 7 ; i++){
        cin >> a[i] ;
    }
    
    sort(a,a+7);//前两小的一定是abc其中两个，最大的一定是a+b+c
    A = a[0];
    B = a[1];
    C = a[6] - B - A ;
    cout << A << " " << B << " " << C ;
    return 0;
}