#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, tmp;
    stack<int> S,T;
    cin >> n;
    int* res = new int[n];
    for(int i=0; i<n; i++) res[i]=0;
    for(int i=0; i<n; i++) {int t; cin >> t; S.push(t);}
    while (!S.empty())
    {
        T=S;
        tmp = T.top();
        T.pop();
        while (T.top()<tmp)
        {
            if(T.size()!=0) T.pop();
            else break;
        }
        res[S.size()-1] = T.size();
        S.pop();
    }
    for(int i=0; i<n; i++) {cout << res[i] << " ";}    

    return 0;
}