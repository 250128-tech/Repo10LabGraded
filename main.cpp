//
// This is Problem 2
//
#include <iostream>
using namespace std;

int commonFactors(int a);
int gcd(int a, int b);

int main()
{
    int a, b; cin >> a >> b;
    cout << commonFactors (gcd (a,b));
    return 0;
}

int gcd(int a, int b)
{
    if ( b == 0 ) { return a;}
    return gcd(b , a % b);
}

int commonFactors(int a)
{
    int counter = 0;
    for ( int i = 1; i <= a ; i++)
    {
        if ( a % i == 0 ) { counter++;}
    }
    return counter;
}