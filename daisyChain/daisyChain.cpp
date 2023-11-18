/*
每天，作为她绕农场行走的一部分，奶牛 Bessie 会经过她最喜爱的草地，其中种有 N朵花（五颜六色的雏菊），编号为 1…N（1≤N≤100），
排列成一行。花 i有 pi朵花瓣（1≤pi≤1000）。作为一名崭露头角的摄影家，Bessie 决定给这些花拍些照片。
具体地说，对于每一对满足 1≤i≤j≤N的花 (i,j)，Bessie 会给从花 i到花 j之间的所有花（包括 i和 j）拍一张照。

后来 Bessie 查看这些照片时注意到有些照片里存在「平均」的花——一朵恰好有 P朵花瓣的花，其中 P等于照片中所有花的花瓣数量的平均值。

Bessie 的照片中有几张存在平均的花？

输入格式（从终端/标准输入读入）：
输入的第一行包含 N。第二行包含 N个空格分隔的整数 p1…pN。
输出格式（输出至终端/标准输出）：
输出存在平均的花的照片数量。
输入样例：
4
1 1 2 3
输出样例：
6
每张仅包含一朵花的照片均会被计入答案（在这个样例中有 4 张）。另外，在这个样例中 (i,j)为 (1,2)和 (2,4)所对应的照片也存在平均的花。
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n ;
    int a[n];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i] ;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j < n; j++){
            int sum = 0;
            for(int k = i ; k <= j; k++){
                sum+=a[k] ;
            }
            int avg = 0;
            avg = sum / (j-i+1);
            for(int k = i ;k <= j ; k++){
                if(a[k] == avg){
                    count++;
                }
            }
        }
        
    }
    cout << count ;
    return 0;
}