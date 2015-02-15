/** 1006 - Hex-a-bonacci */

#include <iostream>

#define NL '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long long int n, caseno = 0, cases, fn[10005];

    cin >> cases;

    while(cases--)
    {
        cin >> fn[0] >> fn[1] >> fn[2] >> fn[3] >> fn[4] >> fn[5] >> n;

        for(int i=6; i<=n; i++)
            fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6]) % 10000007;

        cout << "Case " << ++caseno << ": " << fn[n] % 10000007 << NL;
    }


    return 0;
}
