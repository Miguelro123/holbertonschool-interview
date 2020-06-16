/**
 * is_palindrome - function that checks
 * whether or not a given unsigned integer
 * is a palindrome.
 * @n: unsigned long number to check
 * Return: 1 if is palindrome or 0 if not
 */

int is_palindrome(unsigned long n)
{
    unsigned long x = 0;
    unsigned long aux = n;

    while (aux != 0)
    {
        x += aux % 10;
        aux /= 10;
        if (aux != 0)
            x *= 10;
    }
    if (x == n)
        return (1);
    return (0);
}
