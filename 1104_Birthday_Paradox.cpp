/** 1104 - Birthday Paradox */

#include <iostream>
#include <fstream>

#define eol "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1104");
    //cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        int days;
        cin >> days;
        
        double probability = 1;
        int man = 1;
        
        while(probability > 0.5)
        {
            probability *= (double) (days - man) / days;
            man++;
        }

        cout << "Case " << ++caseno << ": " << man - 1 << eol;
    }

    return 0;
}
