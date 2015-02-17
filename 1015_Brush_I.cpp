/** 1015 - Brush (I) */

#include <iostream>

#define NL "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        int students, total_dust = 0;

        cin >> students;

        for(int i=0; i<students; i++)
        {
            int dust;
            cin >> dust;

            /** If a student gets negative number, I think he is lucky,
            so I will not cause him any pain with dusts. **/
            if(dust>0)
                total_dust += dust;
        }

        cout << "Case " << ++caseno << ": " << total_dust << NL;
    }


    return 0;
}
