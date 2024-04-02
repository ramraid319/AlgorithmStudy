#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test;
    deque<int> D;
    cin >> test;
    for (size_t i = 0; i < test; i++)
    {
        string cmd;
        string S;
        int arrn;
        cin >> cmd >> arrn;
        cin >> S;
        for (size_t i = 0; i <= arrn*2; i++)
        {
            if(i%2==1)
                if(S.at(i)>48 && S.at(i) < 60)
                    D.push_back(S.at(i)-48);
        }
        for (size_t i = 0; i < cmd.size(); i++)
        {
            if(cmd.at(i)=='R')
            {
                reverse(D.begin(), D.end());
            }
            else if(cmd.at(i)=='D' && D.empty())
            {
                cout << "error" << endl;
                break;
            }
            else
            {
                reverse(D.begin(), D.end()-1);
            }
        }
        for(auto it: D) cout << it << " ";

    }

    return 0;
}