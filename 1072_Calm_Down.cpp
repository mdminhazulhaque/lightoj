/** 1072 - Calm Down */

#include <iostream>
#include <fstream>
#include <cmath>

#define eol "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1072");
    //cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        double R, n;
        cin >> R >> n;

        /** each small circle contains angle of 2*PI / n **/
        double s = sin(M_PI/n);

        cout << "Case " << ++caseno << ": " << fixed << (s * R / (s+1)) << eol;
    }

    return 0;
}
