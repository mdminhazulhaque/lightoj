/** 1249 - Chocolate Thief */

#include <iostream>
#include <fstream>

#define NL '\n'
#define LOCAL

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

#ifdef LOCAL
    ifstream in("/home/minhaz/1249");
    cin.rdbuf(in.rdbuf());
#endif // LOCAL

    int caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        cout << "Case " << ++caseno << ": ";

        int students;
        cin >> students;

        string thief, victim;

        int minVolume = 100*100*100, maxVolume = -1;

        while(students--)
        {
            int length, width, height;
            string name;
            cin >> name >> length >> width >> height;

            int volume = length * width * height;

            if(volume > maxVolume)
            {
                thief = name;
                maxVolume = volume;
            }
            if(volume < minVolume)
            {
                victim = name;
                minVolume = volume;
            }
        }

        if(minVolume != maxVolume)
            cout << thief << " took chocolate from " << victim << NL;
        else
            cout << "no thief" << NL;
    }

    return 0;
}
