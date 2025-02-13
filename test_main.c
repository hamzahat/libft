#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// #include <libc.h>

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
// int main (void)
// {
//     char b[10] = "AAAAAAAAAA";
//     ft_memset(b,0,100);
//     for(int i = 0; i < 10;i++)
//         printf("{%d}",b[i]);
// }
// 1337 memset:
// int main(void)
// {
//     int n = 0;
//     char *p = (char *)&n;
//     ft_memset(p, 55, 1);
//     ft_memset(p + 1, 130, 1);
//     ft_memset(p + 2, 216, 1);
//     ft_memset(p + 3, 251, 1);
//     printf("%d\n",n);
// }


// ft_bzero
// int main (void)
// {
//         char p[10] = "hello,";
//         ft_bzero(p+5,5);
//         for(int i = 0; i < 10; i++)
//         printf("{%c}",p[i]);
// }


// ft_memcpy
// int main(void)
// {
//     char dst[10] = "hamza_hat";
//     char src[] = "hamza_hat";
//     char *res = memcpy(dst,src,10);
//     char *r = ft_memcpy(dst,src,10);
//     printf("orginnal:%s\n",res);
//     printf("fvictime:%s\n",r);
//     printf("dstination:%s\n",dst);
// }


// ft_memmove
// int main(void)
// {
//     char dst[10] = "hamza_hat";
//     char src[] = "hamza_hat";
//     char *result = ft_memmove(dst,src,9);
//     char *r = memmove(dst,src,9);
//     printf("fvictime:%s\n",result);
//     printf("origine:%s\n",r);
//     printf("dst:%s\n",dst);
// }


// ft_strlcpy
// int main(void)
// {
//     char dst[10] = "hamza";
//     char *src = NULL;
//     printf("%zu\n",ft_strlcpy(dst,src,sizeof(dst)));
//     printf("%zu\n",strlcpy(dst,src,sizeof(dst)));
// }


// ft_strlcat
// int main (void)
// {
//     char *src = "_hat";
//     printf("%zu\n",ft_strlcat(NULL,src,5));
//     printf("%zu\n",strlcat(NULL,src,5));
// }


// ft_toupper
// int main (void)
// {
//     printf("%c\n",ft_toupper('c'));
//     printf("%c\n",ft_toupper('C'));
//     printf("%c\n",ft_toupper(97));
//     printf("%d\n",ft_toupper(1));
//     printf("%d\n",ft_toupper(-1));
//     printf("%d\n",toupper(-1));
// }


// ft_tolower
// int main (void)
// {
//     printf("%c\n",ft_tolower('C'));
//     printf("%c\n",ft_tolower('c'));
//     printf("%d\n",ft_tolower(-1));
//     printf("%d\n",ft_tolower(1));
// }


// ft_strchr
// int main (void)
// {
//     char *s = "hamza_hat";
// // found = character
//     printf("the character was found: {%s}\n",ft_strchr(s,'a'));
// // nul-termimator found
//     printf("the nul-terminator was found: {%s}\n",ft_strchr(s,0));
// // NULL = character not found
//     printf("the character was not found: {%s}\n",ft_strchr(s,'A'));
// }


// ft_strrchr
// int main (void)
// {
//     char *s = "hamza_hat";
// // found = character
//     printf("the character was found: {%s}\n",ft_strrchr(s,'a'));
// // nul-termimator found
//     printf("the nul-terminator was found: {%s}\n",ft_strrchr(s,0));
// // NULL = character not found
//     printf("the character was not found: {%s}\n",ft_strrchr(s,'A'));
// }


// ft_strncmp
// int main (void)
// {
// there is deferent
    // char *str1 = "hamza_hat\200";
    // char *str2 = "hamza_hat\0";
    // printf("%d\n",ft_strncmp(str1,str2,10));
// there is no deferent
    // char *s1 = "hamza_haT";
    // char *s2 = "hamza_hat";
    // printf("%d\n",ft_strncmp(s1,s2,9));
// }


// ft_memchr
// int main (void)
// {
//     char *s = "hamza_hat";
// // found :
//     printf("%s\n",ft_memchr(s,'a',5));
// // not found :
//     printf("%s\n",ft_memchr(s,'A',5));
// }


// ft_memcmp
// int main (void)
// {
//     char *s1 = "\200ello";
//     char *s2 = "\0ello";
//     printf("%d\n",ft_memcmp(s1,s2,sizeof(s1)));
// }


// ft_strnstr
// int main (void)
// {
//     // char *src = "hamza_hat";
//     char *dst = "hat";
//     printf("%s\n",ft_strnstr(NULL,dst,0));
//     // printf("%s\n",strnstr(NULL,dst,0));
// }


// ft_atoi
// #include <stdlib.h>
// int main (void)
// {
//     printf("mine %d\n", ft_atoi("	 +2147483648"));
//     printf("original %d\n", atoi("	 +2147483648"));
//     return (0);
// }


// ft_atoi
// int main (void)
// {
//     char *num = "9223372036854775808";
//     printf("%d\n",ft_atoi(num));
// }


// ft_calloc
// understand how the conditon work & how to test leaks memery
//  int main (void)
//  {
//      char * f = ft_calloc(10,sizeof(char));
//     free(f);
//  }


// ft_strdup
// int main (void)
// {
//     char *s = "hello, world";
//     char *r = ft_strdup(s);
//     printf("%s\n",r);
//     char *r2 = strdup(s);
//     printf("%s\n",r2);
//     free(r);
//     free(r2);
//     r = NULL;
//     r2 = NULL;
// }


// ft_substr
// int main (void)
// {
//     char *str = "hamza_hat is a student at 1337";
//     char *rest = ft_substr(str,10,sizeof(str) - 10);
//     printf("{%s}\n",rest);
//     free(rest);
// }


// ft_strjoin
// int main (void)
// {
//     // char *s1 = "hamza_";
//     // char *s2 = "hat";
//     char *res= ft_strjoin(NULL,NULL);
//     if (!res)
//     {
//         printf("error");
//         return 1;
//     }
//     printf("%s\n",res);
//     // free(res);
//     // res = NULL;
// }


// ft_strtrim
// int main (void)
// {
//     char *s1 = "     hamza_hat    ";
//     char *rest = ft_strtrim(s1," ");
//     if (!rest)
//         return 1;
//     printf("{%s}\n",rest);
//     free(rest);
//     rest = NULL;
// }


// ft_split
// void leaks(){system("leaks a.out");}
// int main (void)
// {
//     char *str = "hamza_hat is a studen at 1337 schole";
//     char **result = ft_split(str,' ');
//     int i = 0;
//     // printf("%s\n",result[i]);
//     while (result[i])
//         printf("%s\n",result[i++]);
//     int f = 0;
//     while (result[f])
//         free(result[f++]);
//     free(result);
//  atexit(leaks);
// }


// ft_itoa
// int main (void)
// {
//     int n = -123;
//     char *num = ft_itoa(n);
//     printf("%s\n",num);
//     free(num);
//     num = NULL;
// }


// ft_strmapi
// char f(unsigned int n , char c)
// {
//     (void)n;
//     while (c == 'h')
//     {
//         return c -= 32;
//     }
//     return c;
// }
// int main(void)
// {
//     char *s = "hamza_hat";
//     char *r = ft_strmapi(s,f);
//     printf("%s\n",r);
//     free(r);
//     r = NULL;
// }


// ft_striteri
// void f(unsigned int n, char *p)
// {
//     (void)n;
//     while (*p == 'h')
//     {
//         *p -= 32;
//     }
// }
// int main (void)
// {
//     char s[] = "hamza_hat";
//     ft_striteri(s,f);
//     printf("%s\n",s);
// }


// ft_putchar_fd
// int main (void)
// {
//     ft_putchar_fd('a',1);
//     ft_putchar_fd('\n',1);
// }


// ft_putstr_fd
// int main (void)
// {
//     ft_putstr_fd("hamza_hat",1);
// }


// ft_putendl_fd
// int main (void)
// {
//     ft_putendl_fd("hamza_hat",1);
// }


// ft_putnbr_fd
// int main (void)
// {
//     ft_putnbr_fd(123,1);
// }


// how to test leaks memory
// void leaks(void)
// {
//     system("leaks a.out");
// }
// void fun (void)
// {
//     atexit(leaks);
// }


// int main (void)
// {
//     int i = 1;
//     char *p = (char *)&i;
//     ft_bzero(p,4);
//     printf("%d\n",i);
// }

// ft_binary_Search
// int main (void)
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 10 index 
// 	int high = sizeof(arr) / sizeof(arr[0]);
// 	int key = 11;
// 	int *result = int_arr_binarySearch(arr, 0, high - 1, key);
// 	if (result)
// 		printf ("the element found %d\n", *result);
// 	else
// 		printf("not found\n");
// 	return (0);
// }