#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n=0, idx=1;
    stack<int> s;
    string res;

    cin >> n;
    
    while (n--)
    {
        int tmp;
        cin >> tmp;
        while (idx <= tmp)
        {
            s.push(idx++);
            res.push_back('+');
        }
        if(s.top()>tmp)
        {
            cout << "NO";
            return 0;
        }
        s.pop();
        res.push_back('-');
    }

    for(auto it: res) cout << it << endl;

    return 0;
}