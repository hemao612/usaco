/*
Calculate the factorial of a non-negative integer n
n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1.
*/

#include <iostream>

using namespace std;

int factorial(int n)
{
    int result = 1;

    if (n == 0){
        return 1;
    }
    else {
        return n* factorial(n-1);
    }
    return result;
}

int main()
{

    cout << factorial(10) << "\n";
    return 0;
}