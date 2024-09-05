bool is_prime(int m, int cur_test_number = 3)
{
    if (m == 2)
        return true;

    if (m <= 1 || m % 2 == 0)
        return false;

    if (m == cur_test_number)
        return true;

    if (m % cur_test_number == 0)
        return false;
}

int count_primes(int start, int end)
{
    if (start > end)
        return 0;

    int result = count_primes(start + 1, end);

    if (is_prime(start))
        result += 1;

    return result;

}
