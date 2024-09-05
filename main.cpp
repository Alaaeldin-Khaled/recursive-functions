#include <iostream>
#include <algorithm>
#include "Q1.h"
#include "Q2.h"
#include "Q3.h"
#include "Q4.h"
#include "Q5.h"
#include "Q6.h"
#include "Q7.h"
#include "Q8.h"
#include "Q9.h"
#include "Q10.h"
#include "Q11.h"
#include "Q12.h"
#include "Q13.h"
#include "Q15.h"
#include "Q16.h"
#include "Q17.h"
using namespace std;

int factorial(int n)
{
    cout << "Function Call: factorial: n = " << n << endl;

    if (n == 1)
        return n;

    return factorial(n - 1) * n;
}

// printing triangle

void triangle(int levels)
{
    if (levels == 0)
        return;

    for (int i = 0; i < levels; ++i)
        cout << "*";
    cout << endl;

    triangle(levels - 1);
}

//void reversed_triangle(int levels)
//{
//    if (levels != 1)
//        reversed_triangle(levels - 1);
//
//    for (int i = 0; i < levels; ++i)
//        cout << "*";
//
//    cout << endl;
//}

void print_triangle(int levels)
{
    if (levels == 0)
        return;

    print_triangle(levels - 1);

    for (int i = 0; i < levels; ++i)
        cout << "*";
    cout << endl;
}

// print 3n + 1 sequence
void sequence(int num)
{
    cout << num << " ";

    if (num == 1)
        return;

    if (num % 2 == 0)
        sequence(num / 2);
    else
        sequence(3 * num + 1);

}



int main()
{
//    cout << factorial(5) << endl;

//    triangle(5);
//    reversed_triangle(5);
//    print_triangle(5);

    //sequence(6);

//    cout << sequence_length(6);

//    cout << my_pow(7, 1);

//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
//    int arr[] = {1, 8, 2, 10, 3};

//    cout << arr_max(arr, 5);
//    cout << arr_sum(arr, 5);
//    cout << array_average(arr, 5);

/** Increment array by position */

//    int arr[] {1, 2, 5, 9};
//    int arr2[] {1, 8, 2, 10, 3};
//
//    array_increment(arr, 4);
//    array_increment(arr2, 5);
//
//
//    for (int i = 0; i < 4; ++i)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    for (int i = 0; i < 5; ++i)
//        cout << arr2[i] << " ";
//    cout << endl;

    /** Accumulate array*/
//    int arr[] {1, 2, 3, 4, 5, 6};
//
//    accumulate_arr(arr, 6);
//
//    for (int i = 0; i < 6; ++i)
//        cout << arr[i] << " ";
//    cout << endl;

    /** Q8.  Left-max */

//    int arr[] {1, 3, 5, 7, 4, 2};
//
//    left_max(arr, 6);
//
//    for (int i = 0; i < 6; ++i)
//        cout << arr[i] << " ";
//    cout << endl;

    /** Q9. Right-max */

//    int arr[] {1, 3, 5, 7, 4, 2};
//
//    int arr[] = {1, 8, 2, 10, 3};
//
//    right_max(arr, 5);
//
//    for (int i = 0; i < 5; ++i)
//        cout << arr[i] << " ";
//    cout << endl;

    /** Q10. suffix sum */

//    int arr[] {1, 3, 4, 6, 7};
//
//    cout << suffix_sum(arr, 5, 3) << endl;

    /** Q11. prefix sum */

//    cout << prefix_sum(arr, 5, 3) << endl;

    /** Q12. is palindrome */

//    int arr[] = {2, 2, 4, 4, 6, 4, 4, 2, 2};
//
//    isPalindrome(arr, 9) ? cout << "True" : cout << "False";

    /** Q13. is prefix */

//    string main = "abcdefgh";
//    string prefix = "abcd";
//
//    isPrefix(main, "abcd") ? cout << "True" : cout << "False";

//    int grid[][100] =
//    {
//    {1, 7, 8},
//    {2, 10, 11},
//    {20, 5, 9}
//    };
//
//    cout << path_sum(grid, 0, 0, 3, 3);

//    cout << fibonacci(8);

//    cout << count_primes(1, 10);

    return 0;
}
