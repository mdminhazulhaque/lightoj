/** 1107 - How Cow */

#include <iostream>
#include <fstream>

#define eol "\n"
#define space ' '

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    ifstream in("/home/minhaz/1107");
    cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--) {
	cout << "Case " << ++caseno << ":" << eol;

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int num_cows;
	cin >> num_cows;

	while(num_cows--) {
	    int x, y;
	    cin >> x >> y;

	    if(x > x1 && x < x2 && y > y1 && y < y2)
		cout << "Yes" << eol;
	    else
		cout << "No" << eol;
	}
    }

    return 0;
}
