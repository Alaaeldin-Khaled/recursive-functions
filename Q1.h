int sequence_length(int num)
{

    if (num == 1)
        return 1;

    if (num % 2 == 0)
    {
        return 1 + sequence_length(num / 2);
    }
    else
    {
        return 1 + sequence_length(3 * num + 1);
    }
}
