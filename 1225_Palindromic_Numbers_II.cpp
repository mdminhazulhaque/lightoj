/** 1136 - Division by 3 */

#include <iostream>
//#include <algorithm>
#include <string.h>

#define NL "\n"

using namespace std;

int ispal(const char *s)
{
    const char *p = s + strlen(s) - 1;
    while (s < p)
        if (*p-- != *s++)
            return 0;

    return 1;
}


int main()
{
    ios::sync_with_stdio(false);

    int caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        cout << "Case " << ++caseno << ":" << NL;

        string num, num_rev;
        cin >> num;

        num_rev = num;

        reverse(num_rev.begin(), num_rev.end());

        cout << (num == num_rev ? "Yes" : "No") << NL;


    }

    return 0;
}
