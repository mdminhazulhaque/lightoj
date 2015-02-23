/** 1414 - February 29 */

#include <iostream>
#include <fstream>
#include <map>

#define eol "\n"

using namespace std;

bool is_leap_year(int year)
{
    return ((year%4 == 0 && year%100 != 0) || year%400 == 0);
}

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1414");
    //cin.rdbuf(in.rdbuf());

    map<string,int> month_map;
    month_map["January"] = 1;
    month_map["February"] = 2;
    month_map["March"] = 3;
    month_map["April"] = 4;
    month_map["May"] = 5;
    month_map["June"] = 6;
    month_map["July"] = 7;
    month_map["August"] = 8;
    month_map["September"] = 9;
    month_map["October"] = 10;
    month_map["November"] = 11;
    month_map["December"] = 12;

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--)
    {
        string word;
        int day0, day1, month0, month1, year0, year1;

        cin >> word >> day0;
        cin.ignore(1); // ignore fucking ','
        cin >> year0;
        month0 = month_map[word];

        cin >> word >> day1;
        cin.ignore(1); // ignore fucking ','
        cin >> year1;
        month1 = month_map[word];

        if(is_leap_year(year0))
        {
            // If March or later
            if(month0 > 2)
                year0++;
        }
        year0--;

        if(is_leap_year(year1))
        {
            // if 29 Feb or later
            if(month1 > 2 || (month1==2 && day1==29))
                year1++;
        }
        year1--;

        int leap_days = (year1/4 - year1/100 + year1/400) - (year0/4 - year0/100 + year0/400);

        cout << "Case " << ++caseno << ": " << leap_days << eol;
    }

    return 0;
}
