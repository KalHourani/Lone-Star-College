double pow(double x, int n)
{
        double result = 1;
        while (n > 0)
        {
                if (n % 2 == 1)
                {
                        result *= x;
                }
                n /= 2;
                x *= x;
        }
        return result;
}
