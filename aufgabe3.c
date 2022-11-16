int multiply(int x , int y) 
{
    int res = 0;
    while (y != 0)
    {
        res = res + x;
        y--;
    }
    res = abs(res);
    return res;
}
