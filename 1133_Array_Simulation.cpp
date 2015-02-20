/** 1133 - Array Simulation */

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

#define NL "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1103");
    //cin.rdbuf(in.rdbuf());

    short caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        cout << "Case " << ++caseno << ":" << NL;

        short length, operations;

        cin >> length >> operations;

        vector<int> array;

        for(int i=0; i<length; i++)
        {
            int elem;
            cin >> elem;
            array.push_back(elem);
        }

        for(int o=0; o<operations; o++)
        {
            int operand;

            char cmd;
            cin >> cmd;

            if(cmd == 'S')
            {
                cin >> operand;

                for(int i=0; i<length; i++)
                    array[i] += operand;
            }
            else if(cmd == 'M')
            {
                cin >> operand;

                for(int i=0; i<length; i++)
                    array[i] *= operand;
            }
            else if(cmd == 'D')
            {
                cin >> operand;

                for(int i=0; i<length; i++)
                    array[i] /= operand;
            }
            else if(cmd == 'R')
            {
                reverse(array.begin(), array.end());
            }
            else if(cmd == 'P')
            {
                int y, z;
                cin >> y >> z;

                swap(array[y], array[z]);
            }
        }

        for(int i=0; i<length; i++)
        {
            cout << array[i];
            if(i!=length-1)
                cout<< " ";
        }

        cout << NL;
    }

    return 0;
}
