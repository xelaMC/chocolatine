/*
** EPITECH PROJECT, 2021
** gtenbr
** File description:
** betnbr
*/

int max_int(int n)
{
    if (n < 2147483647 && n > -2147483648) {
        return (n);
    }
    return (0);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int isneg = 1;
    int n = 0;
    for (;str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-') {
            isneg *= -1;
        }
    }
    while (str[i] != '\0') {
        if (str[i] <= '9' && str[i] >= '0') {
            n *= 10;
            n += str[i] - '0';
            i++;
        } else {
            return (max_int(n * isneg));
        }
    }
    return (max_int(n * isneg));
}