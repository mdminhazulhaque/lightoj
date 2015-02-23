/** 1211 - Intersection of Cubes */

#include <iostream>
#include <fstream>

#define eol "\n"
#define space ' '
#define sqr(x) ((x)*(x))
#define len(var) var.size()

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    ifstream in("/Users/minhaz/1211");
    cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        cout << "Case " << ++caseno << ": ";

        int n;
        cin >> n;

        int xmin, xmax, ymin, ymax, zmin, zmax;
        xmin = ymin = zmin = 0;
        xmax = ymax = zmax = 1000;

        for(int i=0; i<n; i++)
        {
            int x1, y1, z1, x2, y2, z2;
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

            xmin = max(x1, xmin);
            ymin = max(y1, ymin);
            zmin = max(z1, zmin);

            xmax = min(x2, xmax);
            ymax = min(y2, ymax);
            zmax = min(z2, zmax);
        }

        int volume = (xmax-xmin) * (ymax-ymin) * (zmax-zmin);

        if(volume < 0)
            volume = 0;

        cout << volume << eol;
    }

    return 0;
}
