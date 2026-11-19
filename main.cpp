//
// This is Problem 6
//
#include <iostream>
using namespace std;

// numPrimeArrangements has to be long long or it overflows;
long long numPrimeArrangements(int n);
bool isPrime(int x);
long long factorial(int n);

int main()
{
    int n; cin >> n;
    if ( n <= 46 )
    {
        cout << numPrimeArrangements(n);
    }
    else
    {
        cout << 10 << '^' <<9 << '+' << 7;
    }
    return 0;
}

long long factorial(int n)
{
    if ( n == 1 ) { return 1; }
    return n * factorial(n-1);
}

bool isPrime(int x)
{
    for ( int i = 2; i < x ; i++ )
    {
        if ( x % i == 0) { return false;}
    }
    return true;
}

long long numPrimeArrangements(int n)
{
    if ( n == 2) { return 2;}
    if ( n == 1 ) { return 1;}
    int numPrimeNums = 0;
    for ( int i = 2; i <= n ; i++ )
    {
        if ( isPrime(i)){
            numPrimeNums++;
        }
    }
    return factorial(numPrimeNums) * factorial(numPrimeNums-1);
}