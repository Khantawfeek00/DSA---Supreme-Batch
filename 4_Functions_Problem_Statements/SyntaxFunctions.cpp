#include <iostream>
using namespace std;
// void print(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Babber"<<endl;
//     }
// }

void printBabber(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Babber" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printBabber(n);
    return 0;
}
