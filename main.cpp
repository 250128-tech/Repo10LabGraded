//
// This is Problem 5
//
#include <iostream>
using namespace std;

bool canAliceWin(int n);
bool play(int n , int take , bool aliceTurn );

int main()
{
    int n; cin >> n;
    cout << boolalpha << canAliceWin(n);
    return 0;
}

bool play(int n , int take , bool aliceTurn )
{
    if ( n < take ) { return aliceTurn;}
    aliceTurn = aliceTurn ? false : true;
    return play(n - take,take--, aliceTurn );
}

bool canAliceWin(int n)
{
    int take = 10;
    bool aliceTurn = true;
    return play( n, take, aliceTurn) ? false : true;
}