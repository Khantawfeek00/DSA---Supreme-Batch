if (i >= arr.size())
    {
        out.push_back(temp);
        return;
    }
    for (int j = i; j < arr.size(); j++)
    {
        temp.push_back(arr[j]);
        printSubArrays(arr, j + 1, out, temp);
        temp.pop_back();
    }