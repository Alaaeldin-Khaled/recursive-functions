#include <algorithm>
void left_max(int arr[], int len)
{
    if (len != 2)
        left_max(arr, len - 1);

    arr[len - 1] = max(arr[len - 1], arr[len - 2]);
}
