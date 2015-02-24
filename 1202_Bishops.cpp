/** 1202 - Bishops */

#include <iostream>
#include <fstream>
#include <cstdlib>

#define eol "\n"
#define space ' '

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    ifstream in("/home/minhaz/1202");
    cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--) {
	cout << "Case " << ++caseno << ": ";;

	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;

	// check absolute diff
	r1 = abs(r1 - r2);
	c1 = abs(c1 - c2);

	// if it takes equal steps for both
	if(r1 == c1)
	    cout << "1" << eol;
	else if(r1 % 2 == c1 % 2)
	    cout << "2" << eol;
	else
	    cout << "impossible" << eol;
    }

    return 0;
}
