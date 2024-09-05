bool isPrefix(string main, string prefix, int start_pos = 0)
{
    if (start_pos == prefix.size())
        return true;

    if (main[start_pos] == prefix[start_pos])
        return isPrefix(main, prefix, start_pos + 1);

    return false;
}
