/** 1248 - Dice (III) */

#include <iostream>
#include <fstream>

#define eol "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    //ifstream in("/home/minhaz/1248.txt");
    //cin.rdbuf(in.rdbuf());

    short caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        int time;
        cin >> time;
        
        double sum = 0;
        
        for(int i=1; i<=time; i++)
            sum += (double) time / i;
        
        cout << "Case " << ++caseno << ": " << fixed << sum << eol;
    }

    return 0;
}
