#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    list<char> a, cmd;
    int c;
    char tmp;
    for (size_t i = 0; i < 100001; i++)
    {
        cin.get(tmp);
        if(tmp=='\n') break;
        a.push_back(tmp);
    }
    cin >> c;
    for (size_t i = 0; i < c; i++)
    {
        cin >> tmp;
        if(tmp == 'P') c++;
        cmd.push_back(tmp);
    }
    auto cursor = a.end();
    for (auto it = cmd.begin(); it != cmd.end(); it++)
    {

        if(*it=='P')
        {
            it++;
            a.insert(it, *it);
            cursor++;
        }
        else if(*it=='L'&&cursor!=a.begin()) cursor--;
        else if(*it=='D'&&cursor!=a.end()) cursor++;
        else if(*it=='B')
        {
            a.erase(cursor--);
        }
    }
    for(auto it:a) cout << it;
    cout << endl;
    for(auto it:cmd) cout << it;
    return 0;
}