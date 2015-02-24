/** 1227 - Boiled Eggs */

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

#define eol "\n"
#define space ' '
#define len(var) var.size()

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	ifstream in("/home/minhaz/1227");
	cin.rdbuf(in.rdbuf());

	int caseno = 0, cases = 1;

	cin >> cases;

	while(cases--)
	{
		cout << "Case " << ++caseno << ": ";

		int eggs_count, eggs_max, weight_max;
		cin >> eggs_count >> eggs_max >> weight_max;

		vector<int> weight_of_eggs;

		for(int i=0; i<eggs_count; i++)
		{
			int weight;
			cin >> weight;
			weight_of_eggs.push_back(weight);
		}

		int eggs_desired = 0;

		for(int i=0; i< min(eggs_count, eggs_max); i++)
		{
			if(weight_max < weight_of_eggs[i])
				break;
			eggs_desired++;
			weight_max -= weight_of_eggs[i];
		}

		cout << eggs_desired << eol;
	}

	return 0;
}
