#include <iostream>

using namespace std;

const int MAX_SIZE = 10000;
int arr[MAX_SIZE];
int pos = -1;

void push(int arr[], int val)
{
    pos++;
    arr[pos] = val;
}

int pop(int arr[])
{
    int tmp = arr[pos];
    if (pos < 0)
    {
        return -1;
    }
    else
    {
        pos--;
        return tmp;
    }
}

int size()
{
    return pos + 1;
}

int empty(int arr[])
{
    if (pos < 0)
        return 1;
    else
        return 0;
}

int top(int arr[])
{
    if(pos < 0) return -1;
    return arr[pos];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "push")
        {
            int val;
            cin >> val;
            push(arr, val);
        }
        else if (cmd == "pop")
        {
            cout << pop(arr) << endl;
        }
        else if (cmd == "size")
        {
            cout << size() << endl;
        }
        else if (cmd == "empty")
        {
            cout << empty(arr) << endl;
        }
        else if (cmd == "top")
        {
            cout << top(arr) << endl;
        }
        
        
    }
    

    return 0;
}