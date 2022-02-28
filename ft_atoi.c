int ft_atoi(char *str)
{
    int i;
    int is_neg;
    int res;

    is_neg = 1;
    i = 0;
    res = 0;
    while(str[i] != '\0' && (str[i] <= 32 || str[i] == 127))
        i++;
    while(str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
    {

        if (str[i] == '-')
            is_neg = -is_neg;
        i++;
    }
    while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res * is_neg);
}