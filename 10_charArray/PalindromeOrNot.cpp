#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char arr[])
{
    int s = 0;
    int e = strlen(arr) - 1;
    while (s < e)
    {
        if (arr[s] != arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
int main()
{
    char arr[4];
    cout << "Enter the string : ";
    cin.getline(arr, 30);
    if (isPalindrome(arr))
        cout << "The String " << arr << " is Palindrome" << endl;
    else
        cout << "The String " << arr << " is not Palindrome" << endl;
}