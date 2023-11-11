// Purpose: Implementation of insertion sort algorithm

#include <iostream>
#include <vector>

using namespace std;

int main() {
    freopen("insertionsort.in", "r", stdin);
    freopen("insertionsort.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    // Complete your code here.

    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
    return 0;
}