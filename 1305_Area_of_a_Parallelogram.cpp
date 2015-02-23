/** 1305 - Area of a Parallelogram */

#include <iostream>
#include <fstream>
#include <cstdlib>

#define eol "\n"
#define space " "
#define sqre(x) ((x)*(x))

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1305");
    //cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

        Dx = Cx - Bx + Ax;
        Dy = Cy - By + Ay;

        /**
                   | Ax Ay |
        area = det | Bx By |
                   | Cx Cy |
       **/

        int area = Ax*(By-Cy) + Bx*(Cy-Ay) + Cx*(Ay-By);

        cout << "Case " << ++caseno << ": " << Dx << space << Dy << space << abs(area) << eol;
    }

    return 0;
}
