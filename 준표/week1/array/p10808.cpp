#include <iostream>

using namespace std;

int main()
{
    string AtoZ;
    AtoZ = "abcdefghijklmnopqrstuvwxyz";
    string input;
    cin >> input;
    int arr[26] = {0, };
    
    for (int i = 0; i < input.size(); i++)
    {
        if (input.at(i) > 96 && input.at(i) < 123)
        {
            arr[input.at(i) - 97]++;
        }
        
    }
    
    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}