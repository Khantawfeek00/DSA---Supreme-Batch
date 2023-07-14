#include <iostream>
using namespace std;
int f(int x)
{
    if (x == 2)
        return 2;
    cout << '+';
    f(x - 1);
}

string removeAllOccSubstr(string &s, string &part)
{
    int index = s.find(part);
    if (index != string::npos)
    {
        s.erase(index, part.length());
        removeAllOccSubstr(s, part);
    }
    return s;
}
int main()
{
    // int a = 5, b = -7, c = 0, d;
    // d = ++a && ++b || ++c;
    // printf("%d %d %d %d", a, b, c, d);

    // int y = 1;
    // if (y & (y = 2))
    // {
    //     printf("true is %d\n", y);
    // }
    // else
    //     cout << y;

    // cout << !!!10;
    // unsigned int a = 10;
    // a = ~a;
    // cout << a;
    // printf("%d", a);

    // switch ('A')
    // {
    // case 1==2:
    //     cout << "A";
    //     break;
    // }

    // int n = f(6);
    // cout << n << endl;
    // return 0;

    string s = "Taffeek";
    string part = "fe";
    cout << removeAllOccSubstr(s, part);
    return 0;
}