/** 1216 - Juice in the Glass */

#include <iostream>
#include <cmath>

#define eol "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1216");
    //cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        int r_top, r_bottom, h_glass, h_juice;
        cin >> r_top >> r_bottom >> h_glass >> h_juice;

        double r_juice = r_bottom + (r_top - r_bottom) * ((double)h_juice/h_glass);

        /**
        * this thing is called Frustum
        * @link http://www.engineeringtoolbox.com/surface-volume-solids-d_322.html
        V = PI/12 * h * (D^2 + D*d + d^2)
        **/
        double volume_juice = M_PI/3*h_juice*(r_juice*r_juice + r_juice*r_bottom + r_bottom*r_bottom);

        cout << "Case " << ++caseno << ": " << fixed << volume_juice << eol;
    }

    return 0;
}
