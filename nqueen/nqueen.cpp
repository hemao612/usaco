/*
题目地址
 https://leetcode.com/problems/n-queens/
*/
#include <iostream>
#include <vector>

using namespace std;

int print = 0;

void backtrack(vector<vector<string>> &solutions, int n, int row, vector<int> &rq, vector<int> &dq1, vector<int> &dq2)
{
    if (row == n)
    {
        print++;
        return;
    }


    for (int i = 0; i < n; i++) //i第几列
    {

        if (rq[i] != -1){
            continue; //如果新放置的地方已经被覆盖了那就进入下一层循环
        }
        if (dq1[row+i] != -1){
            continue;
        }
        if (dq2[row - i + n - 1] != -1){
            continue;
        }
        rq[i] = row ; 
        dq1[row + i] = 1 ;
        dq2[row-i + n - 1] = 1 ;
        backtrack(solutions, n, row + 1, rq, dq1, dq2);
        rq[i] = -1 ;
        dq1[row + i] = -1 ;
        dq2[row - i + n - 1] = -1 ;
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<string> s = vector<string>();
    vector<vector<string>> solutions = vector<vector<string>>();
    // Backtracking

    vector<int> rq = vector<int>(n,-1);//rq[i]表示第i个皇后的行数
    vector<int> dq1 = vector<int>(2*n -1, -1);//dq表示斜线上的皇后的个数
    vector<int> dq2 = vector<int>(2*n -1, -1);//dq表示斜线上的皇后的个数

    backtrack(solutions, n, 0, rq, dq1, dq2);

    return solutions;
}
/*
 * row代表当前已经放置皇后到第row行
 */
int main(){
    solveNQueens(4);
    cout << "helloworld" << endl;
    cout << print << endl ; 
}
//rq标记第i个皇后的行数