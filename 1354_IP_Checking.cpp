/** 1354 - IP Checking */

#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>

#define eol "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    ifstream in("/home/minhaz/1354");
    cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        string line;
        int ip_dec[4];

        cin >> line;

        for(int i=0; i<line.size(); i++)
        {
            if(line[i] == '.')
                line[i] = ' ';
        }

        stringstream stream_dec(line);
        stream_dec >> ip_dec[0] >> ip_dec[1] >> ip_dec[2] >> ip_dec[3];

        //cout << ip_dec[0] << ip_dec[1] << ip_dec[2] << ip_dec[3] << eol;

        cin >> line;

        for(int i=0; i<line.size(); i++)
        {
            if(line[i] == '.')
                line[i] = ' ';
        }

        stringstream stream_bin(line);

        bool same_ip = true;

        for(int i=0; i<4; i++)
        {
            string buffer;
            stream_bin >> buffer;
            bitset<8> ip_bin(buffer);
            if(ip_dec[i] != ip_bin.to_ulong())
            {
                same_ip = false;
                break;
            }
        }

        cout << "Case " << ++caseno << ": " << (same_ip ? "Yes" : "No") << eol;
    }

    return 0;
}
