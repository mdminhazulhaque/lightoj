/** 1182 - Parity */

#include <iostream>
#include <fstream>
#include <cmath>

#define eol "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1072");
    //cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        unsigned long int n;
        cin >> n;

        int bits = 0;

        while(n)
        {
            if(n&1)
                bits++;

            n >>= 1;
        }

        cout << "Case " << ++caseno << ": " << (bits&1 ? "odd" : "even") << eol;
    }

    return 0;
}
