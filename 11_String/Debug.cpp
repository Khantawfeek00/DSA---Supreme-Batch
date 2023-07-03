#include <bits/stdc++.h>
using namespace std;

void reverseString(char input[], int n, int start)
{
    for (int i = start, j = n - 1 + start; i < j; i++, j--)
    {
        // Fixed swap
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void reverseEachWord(char input[])
{
    int start = 0, count = 1, i = 0;
    while (input[i] != 0)
    {
        i++;
        count++;
        if ((input[i] == ' ' || input[i] == '\0'))
        { // Fix: Need to check if terminating or not
            reverseString(input, count - 1, start);
            start = i + 1;
            count = 0;
        }
    }
}

string isPalindrome(string S)
{
    int N = S.length();
    for (int i = 0; i < (N / 2); i++)
    {
        if (S[i] != S[N - i - 1])
        {
            return "No";
        }
    }
    return "Yes";
}

string removeDuplicate(string str, int n)
{
    // str is character array and n is the lenght of the character array
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (str[i] == str[j])
                break;
        if (i == j)
            str[index++] = str[j];
    }

    return str;
}

char maxOccurring(char *str)
{
    int count[256] = {0};
    int max = 0;
    char answer;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            max = count[str[i]];
            answer = str[i];
        }
    }
    return answer;
}

// NOT WORKING
// DEBUG IS CORRECT
string reverseWord(string s)
{
    vector<string> tmp;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    { // Strings doesn't have null characters as terminator by default
        if (s[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }
        else
            str += s[i];
    }
    tmp.push_back(str);
    return str;
    // No return statement as function is void
}

int main()
{

    // 1.
    //  string str;
    //  cin >> str;
    //  cout << reverseWords(str);

    // 2. Debug the code. This code tries to find first maximum occurring character.
    // char str[] = "sample string";
    // cout << "Max Occuring Element = " << maxOccurring(str);

    // 3.Debug the code. It tries to remove duplicates from the given string.
    // string str;
    // cin >> str;
    // cout << removeDuplicate(str, str.length());

    // 4.Debug the code. It tries to check if given string a Palindrome or not.
    // string str;
    // cin >> str;
    // cout << isPalindrome(str);

    // 5.
    char char_array[] = {'L', 'A', 'K', 'S', 'H', 'A', 'Y'};
    int array_size = sizeof(char_array) / sizeof(char);
    string j = "";
    int i;
    for (i = 0; i < array_size; i++)
    {
        j = j + char_array[i];
    }
    cout << j << endl;

    // 6.Debug the code. This code attempt to reverse all words occur in a sentence. All words are space separated.
}