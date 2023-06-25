class Solution
{
public:
    int singleNonDuplicate(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        int mid = 0;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (start == end)
                return arr[mid];
            if (mid & 1 == 0)
            {

                if (mid + 1 <= arr.size() - 1 && arr[mid] == arr[mid + 1])
                {
                    start = mid + 2;
                }
                else
                {
                    end = mid;
                }
            }
            else
            {
                if (mid - 1 >= 0 && mid & 1 == 1 && arr[mid] == arr[mid - 1])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};