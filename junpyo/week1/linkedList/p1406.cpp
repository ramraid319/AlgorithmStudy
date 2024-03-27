#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string init;
    list<char> a;
    int o;
    
    cin >> init;
    cin >> o;
    for(auto it: init) a.push_back(it);
    auto cursor = a.end();
    while (o--)
    {
        char op;
        cin >> op;
        if (op=='L')
        {
            if(cursor!=a.begin()) cursor--;
        }
        else if(op=='D')
        {
            if(cursor!=a.end()) cursor++;
        }
        else if(op=='B')
        {
            if(cursor!=a.begin())
            {   cursor--;
                cursor = a.erase(cursor);
            }
        }
        else if(op=='P')
        {
            char tmp;
            cin >> tmp;
            a.insert(cursor, tmp);
        }
    }
    for(auto it: a) cout << it;
    return 0;
}