/** 1136 - Division by 3 */

#include <iostream>

#define NL "\n"

using namespace std;

int divisionBy3(int len)
{

    /**
    pattern of the numbers is

    - means not divisible by 3
    + means not divisible by 3

    - 1
    + 12
    + 123
    - 1234
    + 12345
    + 123456
    - 1234567
    + 12345678
    + 123456789
    - 1234567891
    - 12345678910
    - 123456789101
    + 1234567891011
    - 12345678910111
    + 123456789101112
    - 1234567891011121
    - 12345678910111213
    - 123456789101112131
    + 1234567891011121314

    so 2 in each set of 3 numbers are divisible by 3
    so len/3*2 would be the answer

    for numbers with len%3!=0, add 1 if 2 numbers are left in pattern
    **/

    return len/3*2 + (len%3==2);
}

int main()
{
    ios::sync_with_stdio(false);

    int caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        int A, B;
        cin >> A >> B;

        cout << "Case " << ++caseno << ": " << divisionBy3(B) - divisionBy3(A-1) << NL;
    }

    return 0;
}
