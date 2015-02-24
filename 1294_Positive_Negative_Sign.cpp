/** 1331 - Agent J */

#include <iostream>
#include <fstream>
#include <iomanip>

#define eol "\n"
#define space ' '
#define sqr(x) ((x) * (x))
#define len(var) var.size()

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    //ifstream in("/home/minhaz/1294");
    //cin.rdbuf(in.rdbuf());

    int caseno = 0, cases = 1;

    cin >> cases;

    while(cases--) {
	cout << "Case " << ++caseno << ": ";

	unsigned long long int n, m;
	cin >> n >> m;

	/** not m * n / 2 **/
	cout << fixed <<  m * (n / 2) << eol;
    }

    return 0;
}
