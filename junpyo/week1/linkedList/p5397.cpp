#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;

    while (a--)
    {
        string tmp;
        list<char> L;
        cin >> tmp;
        auto cursor = L.end();
        for(auto it:tmp) {
            if(it=='<')
            {
                if(cursor!=L.begin())cursor--;
            }
            else if(it=='>')
            {
                if(cursor!=L.end())cursor++;
            }
            else if(it=='-')
            {
                if(cursor!=L.begin())
                {
                    cursor--;
                    cursor = L.erase(cursor);
                }
            }
            else L.insert(cursor, it);
        }
        for(auto it: L) cout << it;
        cout << endl;
    }
    return 0;
}