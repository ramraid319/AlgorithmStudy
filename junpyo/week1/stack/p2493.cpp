#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, tmp, size=0;
    stack<int> S,T;
    cin >> n;
    int* res = new int[n];
    for(int i=0; i<n; i++) res[i]=0;
    for(int i=0; i<n; i++) {int t; cin >> t; S.push(t);}
    T=S;
    while (!S.empty())
    {
        T=S;
        tmp = T.top();
        T.pop();
        int idx = T.size();
        while (T.top()<tmp)
        {
            if(T.size()!=0) { idx=T.size(); T.pop(); }
            else break;
        }
        res[T.size()] = idx;
        S.pop();
    }
    for(int i=0; i<n; i++) {cout << res[i] << " ";}    

    return 0;
}