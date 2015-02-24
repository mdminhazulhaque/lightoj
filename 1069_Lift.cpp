/** 1354 IP Checking **/

#include <iostream>
#include <cmath> // math.h does not work, wtf!

#define eol '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    enum
    {
        OPEN_OR_CLOSE = 3,
        FLOOR_TO_FLOOR = 4,
        ENTER_OR_EXIT = 5
    };

    const int overhead = ENTER_OR_EXIT*2 + OPEN_OR_CLOSE*3;

    int caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        int pos_me, pos_lift;

        cin >> pos_me >> pos_lift;

        //int time = abs(pos_lift - pos_me) * FLOOR_TO_FLOOR + pos_me * FLOOR_TO_FLOOR + overhead;
        int time = abs(pos_lift - pos_me) * FLOOR_TO_FLOOR + pos_me * FLOOR_TO_FLOOR + overhead;

        cout << "Case " << ++caseno << ": " << time << eol;
    }

    return 0;
}
