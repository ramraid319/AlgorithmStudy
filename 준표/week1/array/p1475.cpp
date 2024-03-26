#include <iostream>

using namespace std;

int main()
{
    string input;
    int SixNine = 0;
    int max = 0;
    int arr[10] = {0, };
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        arr[input.at(i) - 48]++;
    }

    SixNine = arr[6] + arr[9];

    for (size_t i = 0; i < 10; i++)
        if (max < arr[i] && i != 6 && i != 9) { max = arr[i]; }
    
    if(max < SixNine / 2 + 1)
    {
        if (SixNine % 2 == 0)
            max = SixNine / 2;
        else if (SixNine % 2 == 1)
            max = SixNine / 2 + 1;   
    }
    
    cout << max << endl;

    return 0;
}