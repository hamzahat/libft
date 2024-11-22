#include "libft.h"
#include <stdio.h>

// ft_isalpha:
// int main (void)
// {
//     printf("%d\n",ft_isalpha('c'));
//     printf("%d\n",ft_isalpha('2'));
//     printf("%d\n",ft_isalpha(-1));
// }


// ft_isdigit
// int main (void)
// {
//     printf("%d\n",ft_isdigit('1'));
//     printf("%d\n",ft_isdigit(-1));
//     printf("%d\n",ft_isdigit('c'));
//     printf("%d\n",ft_isdigit(48));
// }


// ft_isalnum
// int main (void)
// {
//   printf("%d\n",ft_isalnum('1'));
//   printf("%d\n",ft_isalnum('c'));
//   printf("%d\n",ft_isalnum(-1));
//   printf("%d\n",ft_isalnum(1));
// }


//ft_isascii
// int main (void)
// {
//     printf("%d\n",ft_isascii('d'));
//     printf("%d\n",ft_isascii('1'));
//     printf("%d\n",ft_isascii(-1));
//     printf("%d\n",ft_isascii(1));
//     printf("%d\n",ft_isascii(255));
// }


// ft_isprint
// int main (void)
// {
//     printf("%d\n",ft_isprint(48));
//     printf("%d\n",ft_isprint(126));
//     printf("%d\n",ft_isprint(0));
//     printf("%d\n",ft_isprint(127));
//     printf("%d\n",ft_isprint(-1));
// }


//ft_strlen
// int main(void)
// {
//     printf("%zu\n",ft_strlen("hello, hamza_hat"));
//     printf("%zu\n",ft_strlen(""));
// }


// ft_memset
// int main(void)
// {
//     char str[10];
//     ft_memset(str, 'A', 10);
//     printf("%s\n",str);
// }

void leaks()
{
    system("leaks a.out");
}
#include <stdlib.h>

int main (void)
{
    atexit(leaks); // do not remove
    printf("mine %d\n", ft_atoi("++2147483648"));
    printf("original %d\n", atoi("++2147483648"));
    return (0);
}