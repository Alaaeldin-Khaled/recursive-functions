// tracing
void do_something(int n)
{
    if (n)
    {
        cout << n % 10;
        do_something(n / 10);
    }
}

// n = 123456
