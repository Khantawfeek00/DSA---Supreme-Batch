
#include <bits/stdc++.h>
using namespace std;
void merge(long long arr[], long long s, long long m, long long e, long long &count)
{
    long long len1 = m - s + 1;
    long long len2 = e - m;
    long long int *left = new long long int[len1];
    long long int *right = new long long int[len2];

    long long k = s;
    for (long long i = 0; i < len1; i++)
    {
        left[i] = arr[k++];
    }

    k = m + 1;
    for (long long i = 0; i < len2; i++)
    {
        right[i] = arr[k++];
    }

    long long i = 0;
    long long j = 0;
    k = s;

    while (i < len1 && j < len2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            count += len1 - i;
            arr[k++] = right[j++];
        }
    }

    while (i < len1)
    {
        arr[k++] = left[i++];
    }

    while (j < len2)
    {
        arr[k++] = right[j++];
    }

    delete[] left;
    delete[] right;
}
void mergeSort(long long arr[], long long s, long long e, long long &count)
{
    if (s >= e)
    {
        return;
    }
    long long mid = s + (e - s) / 2;
    mergeSort(arr, s, mid, count);
    mergeSort(arr, mid + 1, e, count);
    merge(arr, s, mid, e, count);
}
long long int inversionCount(long long arr[], long long N)
{
    // T.C.=O(n^2)
    // long long count=0;
    // for(long long i=0;i<N;i++){
    //     for(long long j=i+1;j<N;j++){
    //         if(arr[i]>arr[j]){
    //             count++;
    //         }
    //     }
    // }
    // return count;

    // T.C.=O(nlogn)
    long long count = 0;
    long long s = 0;
    long long e = N - 1;
    mergeSort(arr, s, e, count);
    return count;
}

int main()
{
    long long arr[] = {2, 4, 1, 3, 5};
    long long N = 5;
    cout << "Inversion Count= " << inversionCount(arr, N);
}