/** 1001 - Opposite Task */

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    unsigned short n;

    cin >> n;

    while(n--)
    {
        short p;
        cin >> p;
        /** there can be at most 10 problems in each computer */
        cout << p/2 << ' ' << p-(p/2) << '\n';
    }

    return 0;
}

