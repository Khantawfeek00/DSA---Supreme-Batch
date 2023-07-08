#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int countPrimes(int n)
{

    // T.C.=O(n √n) S.C.=O(1) //TLE
    //  if(n<=1)
    //      return 0;
    //  int count=0;
    //  for(int i=2;i<n;i++){
    //      if(isPrime(i))
    //          count++;
    //  }
    //  return count;

    // sieve of eratosthenes
    // the array is called sieve
    // T.C.=O(nloglogn) S.C.=O(n)
    if (n <= 2)
        return 0;
    vector<bool> prime(n, true);
    int count = 0;
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (!(prime[i] & 1))
            continue;
        if (prime[i])
        {
            count++;
            int j = i * 2;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    prime[2] = true;
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countPrimes(n);
}