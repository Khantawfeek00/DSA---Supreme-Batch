#include <bits/stdc++.h>
using namespace std;
vector<int> getPrime(int n)
{
    vector<int> arr;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        if (prime[i])
        {
            int j = i * i;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    for (int i = 2; i <= n; i++)
        if (prime[i])
            arr.push_back(i);
    return arr;
}

// using segmented sieve
// steps:
// 1. create a sieve to get prime numbers till root R because after that no digit will divide the number
//  like 110 -130 root=11 because 12*12=144 >R to get prime till 11 from 0
// 2.create dummy array of size R-L+1 and mark all them with true
// 3.get first factor of all prime which we got from step 1 and mark multiple of this is dummy array
// on index j-L to maintain 0 based indexing
// 4. after that note which is prime by checking true after that multiply all that primes
long long primeProduct(long long L, long long R)
{
    // code here

    vector<bool> arr(R - L + 1, true);
    vector<int> primes = getPrime(sqrt(R));
    // for(auto ele:primes){
    //     cout<<ele<<endl;
    // }
    for (long long int ele : primes)
    {

        long long ff = (L / ele) * ele;
        if (ff < L)
            ff += ele;

        // cout<<firstFactor<<endl;

        for (long long int j = max(ff, ele * ele); j <= R; j += ele)
        {
            arr[j - L] = false;
        }
    }
    long long product = 1;
    long mod = 1e9 + 7;
    for (int i = L; i <= R; i++)
    {
        if (arr[i - L])
        {
            product = product * i;
            product = product % mod;
        }
    }
    return product;
}

int main()
{
    long long low, high;
    cin >> low >> high;
    cout << primeProduct(low, high);
}