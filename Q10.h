int suffix_sum(int arr[], int len, int N = 3)
{
    if (N == 0)
        return 0;

    return arr[len - 1] + suffix_sum(arr, len - 1, N - 1);
}
