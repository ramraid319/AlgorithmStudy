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
        auto cursor = tmp.end();
        for(auto it:tmp) {
            if(it=='<') if(cursor!=L.begin())cursor--;
            else if(it=='>') if(cursor!=L.end())cursor++;
            else if(it=='-') if(cursor!=L.begin())
            {
                L.erase(--cursor);
            }
            else cursor = L.insert(cursor, it);
        }
        for(auto it: L) cout << it;
    }
    

    return 0;
}