#include <iostream>
using namespace std;

int main()
{
    char name[4];
    cin >> name;
    // cout << name;
    for (char ele : name)
        cout << ele;

    cout << name[4];
    cout << name[5];

    // char name[20];
    // cin >> name;
    // cout << name;


    char arr[50];
    cin >> arr[49];
    cout << arr[49];
    cin >> name;
    cin.getline(name, 40);
}