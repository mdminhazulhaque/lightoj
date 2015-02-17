/** 1022 - Circle in Square */

#include <iostream>
#include <iomanip>

#define NL "\n"
#define FourMinusPi 0.85840734641

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        double r;

        cin >> r;

        cout << "Case " << ++caseno << ": " << fixed << setprecision(2) << (double)FourMinusPi*r*r << NL;
    }

    return 0;
}
