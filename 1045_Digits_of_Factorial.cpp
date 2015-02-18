/** 1045 - Digits of Factorial */

#include <iostream>
#include <cmath>

#define NL "\n"
typedef long long int ll_int;

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    /** applying DP **/
    double log_data[1000000];

    log_data[2] = log10(2);

    for(ll_int i=2; i<=1000000; i++)
        log_data[i] = log_data[i-1] + log(i);

    int caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        int number, base, digits;

        cin >> number >> base;

        if(number==0 || number==1)
            digits = 1;
        else
            digits = (long)ceil(log_data[number]/log(base));

        cout << "Case " << ++caseno << ": " << digits << NL;
    }

    return 0;
}
