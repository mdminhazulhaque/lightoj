/** 1043 - Triangle Partitioning */

#include <iostream>
#include <cmath>
#include <fstream>

#define eol "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    //ifstream in("/home/minhaz/1043.txt");
    //cin.rdbuf(in.rdbuf());

    short caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        double AB, ratio, crap;
        cin >> AB >> crap >> crap >> ratio;
        cout << "Case " << ++caseno << ": " << fixed << sqrt(ratio/(ratio+1))\
        * AB << eol;
    }

    return 0;
}
