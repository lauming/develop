#include <iostream>

using namespace std;

void showArr(int arr[], int n);
void bubble(int arr[], int n);

int main()
{

    int arr[] = {9, 5, 2, 7, 8, 3, 1, 4};

    showArr(arr, 8);

    bubble(arr, 8);

    showArr(arr, 8);

    return 0;
}

void showArr(int arr[], int n)
{
    cout << "show arr info: " << endl;
    for(int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble(int arr[], int n)
{
    int tmp = 0;

    if(n <= 0) return;

    for(int i=0; i < n-1; ++i)
    {
        for(int j = 0; j < n-1; ++j)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
