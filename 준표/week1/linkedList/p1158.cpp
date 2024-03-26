#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char in[100000], out[600000], tmp;
    int c, cursor, size;
    char cmd[500000];

    for (int i = 0; i < 100001; i++)
    {
        cin.get(tmp);
        if (tmp == '\n') break;
        else
        {
            in[i] = tmp;
            size++;
        }
    }
    cursor = size;
    cin >> c;
    for (size_t i = 0; i < c; i++)
    {
        cin >> cmd[i];
        if(cmd[i]=='P')
        {
            // cursor++;
            size++;
            for (int j = cursor; j < size; j++)
            {
                in[j+1]=in[j];
            }
            
            cin >> in[cursor++];
        }
        else if(cmd[i]=='L'&&cursor>0)cursor--;
        else if(cmd[i]=='D'&&cursor<size)cursor++;
        else if(cmd[i]=='B')
        {
            cursor--;
            size--;
            for (int j = cursor; j < size; j++)
            {
                in[j]=in[j+1];
            }
        }

            
    }
    for (int i = 0; i < size; i++)
    {
        cout << in[i];
    }
    
    
}