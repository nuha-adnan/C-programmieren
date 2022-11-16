int power_1(int x, int y)
{
    if (y != 0) 
    {
        return (x * power_1(x, y - 1));
    }
    else 
    {
        return 1;
    }
}

int power_2(int x, int y)
{
    int res = 1;
    while (y != 0)
    {
        res = res * x;
        y--;
    }
    return res;
}
