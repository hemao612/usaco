// Purpose: Implementation of selection sort algorithm

#include <iostream>
#include <vector>

using namespace std;

int main() {
    freopen("selectionsort.in", "r", stdin);
    freopen("selectionsort.out", "w", stdout);
    int n = 5;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    // Complete your code here.
    int minIndex = 0;
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        int f;
        // Find minIndex position
        for(int j = i+1; j < n;j++){
            if(numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }
        // Swap minIndex and i position
        f = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = f;
    }

    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
    return 0;
}