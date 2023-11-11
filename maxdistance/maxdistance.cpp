/*
You are given N (3 ≤ N ≤ 5000) integer points on the coordinate plane. Find the square of the maximum Euclidean distance (aka length of the straight line)
between any two of the points.

INPUT FORMAT:
The first line contains an integer N.
The second line contains N integers, the x-coordinates of the points: x1, x2, . . . , xn (−1000 ≤ xi ≤ 1000).
The third line contains N integers, the y-coordinates of the points: y1, y2, . . . , yn (−1000 ≤ yi ≤ 1000).

OUTPUT FORMAT:Print one integer, the square of the maximum Euclidean distance between any two of the points.
*/
#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    freopen("maxdistance.in", "r", stdin);
    freopen("maxdistance.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < n; i++)
    {
        int xCoord;
        cin >> xCoord;
        x.push_back(xCoord);
    }
    for (int i = 0; i < n; i++)
    {
        int yCoord;
        cin >> yCoord;
        y.push_back(yCoord);
    }
    int maxDistance = 0;
    // Complete your code here.
    for (int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int d;
            int dx = x[i] - x[j];
            
            int dy = y[i] - y[j];
            
            d = dx * dx + dy * dy ;
            if(d > maxDistance){
                maxDistance = d;
            }
        }
    }
    cout << maxDistance << "\n";
    return 0;
}