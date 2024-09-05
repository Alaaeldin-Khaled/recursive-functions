bool isPalindrome(int arr[], int len, int start_pos = 0)
{
    if (!(start_pos <= len))
        return true;

    if (arr[len - 1] == arr[start_pos])
        return isPalindrome(arr, len - 1, start_pos + 1);

    return false;
}
