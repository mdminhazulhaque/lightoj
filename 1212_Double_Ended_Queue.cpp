/** 1212 - Double Ended Queue */

#include <iostream>
#include <fstream>
#include <queue>

#define eol "\n"
#define space ' '
#define len(var) var.size()

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	ifstream in("/home/minhaz/1212");
	cin.rdbuf(in.rdbuf());

	int caseno = 0, cases = 1;

	cin >> cases;

	while(cases--)
	{
		cout << "Case " << ++caseno << ":" << eol;

		deque<int> deq;
		int queue_len, commands_len;
		cin >> queue_len >> commands_len;

		while(commands_len--)
		{
			int value;
			string command;
			cin >> command;

			if(command == "pushLeft")
			{
				cin >> value;

				if(len(deq) != queue_len)
				{
					deq.push_back(value);
					cout << "Pushed in left: " << value << eol;
				}
				else
					cout << "The queue is full" << eol;
			}
			else if(command == "pushRight")
			{
				cin >> value;
				
				if(len(deq) != queue_len)
				{
					deq.push_front(value);
					cout << "Pushed in right: " << value << eol;
				}
				else
					cout << "The queue is full" << eol;
			}
			else if(command == "popRight")
			{
				if(deq.empty())
					cout << "The queue is empty" << eol;
				else
				{
					cout << "Popped from right: " << deq.front() << eol;
					deq.pop_front();
				}
			}
			else
			{
				if(deq.empty())
					cout << "The queue is empty" << eol;
				else
				{
					cout << "Popped from left: " << deq.back() << eol;
					deq.pop_back();
				}
			}
		}
	}

	return 0;
}
