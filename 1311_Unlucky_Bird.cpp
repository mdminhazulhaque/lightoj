/** 1311 - Unlucky Bird */

#include <iostream>
#include <fstream>

#define eol "\n"
#define sqre(x) ((x)*(x))

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1311");
    //cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        double v1, v2, v3, a1, a2;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;

        /**
           v^2 = u^2 - 2*a*s
        => s = v^2 / 2 / a

        the bird was between the trains
        so distance should be calculated from both sides
        */

        double d = sqre(v1)/2/a1 + sqre(v2)/2/a2;

        /** the bird was repeating the procedure
        v = u - a*t
        => t = v/a
        maximum time * bird's own velocity
        **/
        double distance = max(v1/a1, v2/a2) * v3;

        cout << "Case " << ++caseno << ": " << fixed << d << " " << fixed << distance << eol;
    }

    return 0;
}
