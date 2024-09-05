using namespace std;

int arr_max(int arr[], int len)
{
    if (len == 1)
        return arr[0];

        return max(arr[len - 1], arr_max(arr, len - 1));
}
