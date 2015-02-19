/** 1433 - Minimum Arc Distance */

#include <iostream>
#include <cmath>

#define NL "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        double Ox, Oy, Ax, Ay, Bx, By;

        cin >> Ox >> Oy >> Ax >> Ay >> Bx >> By;

        double r = sqrt((Ox-Ax)*(Ox-Ax) + (Oy-Ay)*(Oy-Ay));
        double AB = sqrt((Bx-Ax)*(Bx-Ax) + (By-Ay)*(By-Ay));

        /** @link http://en.wikipedia.org/wiki/Arc_(geometry)
        theta = 1 - AB^2 / 2r^2
        **/

        double theta = acos(1.00 - pow(AB/r, 2)/2);

        double s = r * theta;

        cout << "Case " << ++caseno << ": " << fixed << s << NL;
    }

    return 0;
}
