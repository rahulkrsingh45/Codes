int BinarySearch(vector<int> arr, int l, int r, int data)
{
    if(l > r)
    return -1;

    int mid = (l + r)/ 2;

    if(arr[mid] == data)
    return mid + 1;
    else if(arr[mid] > data)
    return BinarySearch(arr, l, r - 1, data);
    else
    return BinarySearch(arr, l + 1, r, data);
}
