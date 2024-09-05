/** computes average of array recursively */

double array_average(int arr[], int len)
{
    if (len == 1)
        return arr[0];

    double sub_result = array_average(arr, len - 1);
    sub_result *= len - 1;

    return (sub_result + arr[len - 1]) / len;
}
