/** 1113 - Discover the Web */

#include <iostream>
#include <stack>
#include <fstream>

#define NL "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    //ifstream in("/home/minhaz/1113.txt");
    //cin.rdbuf(in.rdbuf());

    short caseno = 0, cases;

    cin >> cases;

    while(cases--)
    {
        cout << "Case " << ++caseno << ":" << NL;

        stack<string> urls_backword, urls_forward;
        string cmd;
        string url = "http://www.lightoj.com/";

        while(1)
        {
            cin >> cmd;

            if(cmd[0] == 'V') // == "VISIT")
            {
                urls_backword.push(url);

                cin >> url;
                cout << url << NL;

                while(!urls_forward.empty())
                {
                    urls_forward.pop();
                }
            }
            else if(cmd[0] == 'B') // == "BACK")
            {
                /** If the backward stack is empty, the command is ignored **/
                if(urls_backword.empty())
                {
                    cout << "Ignored" << NL;
                }
                else
                {
                    /** Push the current page on the top of the forward stack **/
                    urls_forward.push(url);
                    url = urls_backword.top();
                    /** Pop the page from the top of the backward stack **/
                    urls_backword.pop();
                    cout << url << NL;
                }
            }
            else if(cmd[0] == 'F') // == "FORWARD")
            {
                /** If the forward stack is empty, the command is ignored **/
                if(urls_forward.empty())
                {
                    cout << "Ignored" << NL;
                }
                else
                {
                    /** Push the current page on the top of the backward stack **/
                    urls_backword.push(url);
                    url = urls_forward.top();
                    /** Pop the page from the top of the forward stack **/
                    urls_forward.pop();
                    cout << url << NL;
                }
            }
            else //if(cmd[0] == 'Q') //"QUIT")
            {
                break;
            }
        }
    }

    return 0;
}
