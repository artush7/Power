int power(int x,int n)
{
    int result;
    if ( n >= 0)
    {
        result = 1;
        int i = 1;
        while (i <= n)
        {
            result = result * x;
            i++;
        }
    }
    else
    {
        result = 1;
        int i = -1;
        while (i >= n)
        {
            result = result / x;
            i--;
        }

    }    
    return result;
}