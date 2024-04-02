#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, tmp, idx=1;
    stack<pair<int, int>> S;
    cin >> n;
    S.push({100000001, 0});
    for (int i=1; i<=n; i++)
    {
        int h;
        cin >> h;

        while (S.top().first < h)
        {
            S.pop();
        }
        cout << S.top().second << " ";
        S.push({h,i});
    }
    return 0;
}