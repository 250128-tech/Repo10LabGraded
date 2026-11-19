//
// This is Problem 4
//
#include <iostream>
using namespace std;

bool isThree(int n);
int countDiv(int n, int d);

int main()
{
    int n; cin >> n;
    int d;
    cout << boolalpha << isThree(n);
    return 0;
}

int countDiv(int n, int d)
{
    if ( n == 0 ) { return 0; }
    if ( d == n ) { return 0; }

    return  n % d == 0 ? 1 + countDiv( n, d+1) : 1 + countDiv( n, d+1);
}

bool isThree(int n)
{
    int d = 1;
    if ( countDiv( n , d) == 3 ) { return true;}
    return false;
}