int prefix_sum(int arr[], int len, int N)
{
    if (N == 0)
        return 0;

    return arr[N - 1] + prefix_sum(arr, len, N - 1);
}
