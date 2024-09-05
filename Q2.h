/** Recursive power function */

int my_pow(int value, int p = 2)
{
    if (p == 0)
        return 1;

    return value * my_pow(value, p - 1);
}
