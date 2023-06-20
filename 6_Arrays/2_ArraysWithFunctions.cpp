#include <cstring>
#include <iostream>
using namespace std;

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void inc(int arr[], int size)
// {
//     arr[0] = arr[0] + 10;
//     printArray(arr, size);
// }

// int main()
// {
//     int arr[] = {5, 6};
//     int size = 2;

//     inc(arr, size);

//     printArray(arr, size);
// }

void updateArray(int arr[], int size)
{
    arr[0] = 100;
    return;
}

int main()
{
    int arr[] = {10, 20, 30};
    updateArray(arr, 3);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " ";
}
