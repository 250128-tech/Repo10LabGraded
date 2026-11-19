//
// This is Problem 1
//
#include <iostream>
using namespace std;

int largestDigit(int n);

int main()
{
    int n; cin >> n;
    cout << largestDigit(n);
    return 0;
}

int largestDigit(int n)
{
    int x = n % 10;
    n /= 10;
    if ( n < 10 ) { return n;}
    return x >= largestDigit(n) ? x : largestDigit(n);
}