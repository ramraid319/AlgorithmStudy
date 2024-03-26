#include <iostream>

using namespace std;

int main()
{
    int arr_size;
    int input = 0, res = 0;
    int tmp = 0;
    cin >> arr_size;

    int* arr = new int[arr_size];

    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }

    cin >> input;


    for (int i = 0; i < arr_size; i++)
    {
        tmp = input - arr[i];
        if (tmp > 0)
        {
            for (int j = i + 1; j < arr_size; j++)
            {
                if (tmp == arr[j])
                {
                    res++;
                    break;
                }
            }
        }
    }

    cout << res;

    return 0;
}