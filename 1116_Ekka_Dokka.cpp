/** 1116 - Ekka Dokka */

#include <iostream>

#define NL "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        /** N is odd and M is even **/
        unsigned long long W, M=1; // M will be shifted left
        cin >> W;

        cout << "Case " << ++caseno << ": ";

        if(W&1)
            cout << "Impossible" << NL;
        else
        {
            while(W)
            {
                /** W is kind of N **/
                W >>= 1;
                M <<= 1;

                /** N * M = W **/
                if(W&1)
                {
                    cout << W << " " << M << NL;
                    break;
                }
            }
        }
    }

    return 0;
}
