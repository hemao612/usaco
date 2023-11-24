/*
 https://leetcode.com/problems/n-queens/
*/
#include <iostream>
#include <vector>

using namespace std;

vector<vector<string>> solveNQueens(int n)
{
    vector<string> s = vector<string>();
    vector<vector<string>> solutions = vector<vector<string>>();
    // Backtracking
    backtrack(solutions, n, 0);
}
/*
 * row代表当前已经放置皇后到第row行
 */
void backtrack(vector<vector<string>> &solutions, int n, int row)
{
    if (row == n)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        backtrack(solutions, n, row);
    }
}