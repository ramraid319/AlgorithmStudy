#include <iostream>
#include <string>

using namespace std;

int main()
{
    int in1, in2, in3;
    string res;
    int arr[10] = {0, };

    cin >> in1 >> in2 >> in3;
    res = to_string(in1*in2*in3);

    for (int i = 0; i < res.size(); i++)
    {
        arr[res.at(i) - 48]++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}