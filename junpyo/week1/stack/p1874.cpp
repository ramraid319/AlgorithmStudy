#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n=0, tmp=0, size=0;
    vector<int> vec;
    vector<char> res;
    bool isPos = true;
    cin >> n;
    int idx=1;

    while (n--)
    {
        if(vec.empty())
        {
            vec.push_back(idx++);
            res.push_back('+');
        }
        if(tmp==*prev(vec.end()))
        {
            vec.pop_back();
            res.push_back('-');
        }
        cin >> tmp;
        if(!vec.empty())
        {
            if(tmp < *prev(vec.end()))
            {
                isPos=false;
                break;
            }

            while (tmp>*prev(vec.end()))
            {
                vec.push_back(idx++);
                res.push_back('+');
            }            

        }

    }
    
    
    if (isPos)
        for(auto it: res) cout << it << endl;
    else if(!isPos) cout << "NO";

    return 0;
}