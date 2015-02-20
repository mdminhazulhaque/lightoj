/** 1387 Setu */

#include <iostream>

#define eol '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        cout << "Case " << ++caseno << ":" << eol;

        unsigned long account = 0;
        int operations;

        cin >> operations;

        while(operations--)
        {
            string cmd;
            cin >> cmd;

            if(cmd == "donate")
            {
                unsigned int amount;
                cin >> amount;
                account += amount;
            }
            else
            {
                cout << account << eol;
            }
        }
    }

    return 0;
}
