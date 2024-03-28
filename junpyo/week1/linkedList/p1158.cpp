#include <iostream>
#include <list>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    list<int> L;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        L.push_back(i);
    }
    auto it = L.begin();
    cout << "<";
    while (!L.empty())
    {
        for (int i = 1; i < k; i++)
        {
            it++;
            if (it == L.end())
                it = L.begin();
        }
        cout << *it;
        it = L.erase(it);
        if (!L.empty())
            cout << ", ";
        if (it == L.end())
            it = L.begin();
    }
    cout << ">";
    return 0;
}