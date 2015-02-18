/** 1053 - Higher Math */

#include <iostream>
#include <cmath>

#define NL "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        int a, b, c;
        bool isRightTriangle = false;

        cin >> a >> b >> c;

        if(a*a == b*b + c*c)
            isRightTriangle = true;
        else if(b*b == c*c + a*a)
            isRightTriangle = true;
        else if(c*c == a*a + b*b)
            isRightTriangle = true;

        cout << "Case " << ++caseno << ": " << (isRightTriangle ? "yes" : "no") << NL;
    }

    return 0;
}
