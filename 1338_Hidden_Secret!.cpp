/** 1338 - Hidden Secret! */

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <algorithm>

#define eol "\n"
#define space ' '
#define sqr(x) ((x)*(x))
#define len(var) var.size()

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1338");
    //cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    string line;
    getline(cin, line);

    stringstream(line) >> cases;

    while(cases--)
    {
        cout << "Case " << ++caseno << ": ";

        string line1, line2;

        getline(cin, line1);
        getline(cin, line2);

        // Remove space and covert to lowercase

        for(int i=0; i<len(line1); i++)
        {
            if(line1[i]==' ')
                line1=line1.erase(i,1);
            line1[i] = tolower(line1[i]);
        }

        for(int i=0; i<len(line2); i++)
        {
            if(line2[i]==' ')
                line2.erase(i,1);
            line2[i] = tolower(line2[i]);
        }

        // Sort to make it clear if the string matches

        sort(line1.begin(), line1.end());
        sort(line2.begin(), line2.end());

        // Swap if line2 is bigger
        if(len(line1) < len(line2))
            swap(line1, line2);

        // Find line2 in line 1
        if(line1.find(line2) != string::npos)
            cout << "Yes";
        else
            cout << "No";

        cout << eol;
    }

    return 0;
}
