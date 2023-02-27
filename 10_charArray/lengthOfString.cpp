#include <iostream>
#include <string.h>
using namespace std;

int getLength(char arr[])
{

    int count = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char name[4];
    cout << "Enter the string : ";
    cin.getline(name, 30);
    cout << "Length of String is : " << getLength(name);
    cout << "Length of String is : " << strlen(name);
}