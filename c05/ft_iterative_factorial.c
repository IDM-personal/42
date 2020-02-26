int ft_iterative_factorial(int nbr)
{
    int fact = 1;

    while (nbr >= 1)
    {
        fact *= nbr;
        nbr--;
    }
    return (fact);
}

int main()
{
    printf("%i",ft_iterative_factorial(25));
}
