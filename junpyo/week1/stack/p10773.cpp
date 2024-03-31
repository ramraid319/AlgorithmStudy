#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, sum=0;
    cin >> k;
    vector<int> v;

    for (int i = 0; i < k; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 0)
            v.pop_back();
        else
            v.push_back(tmp);
    }
    for(auto it: v) sum+=it;
    cout << sum;
    return 0;
}