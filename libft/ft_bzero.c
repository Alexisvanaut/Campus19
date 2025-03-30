#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *s2;

    i = 0;
    s2 = (unsigned char *)s;
    while (i < n)
    {
        s2[i] = 0;
        i++;
    }
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    int i = 0;
    char tab[4] = {'1','2','3','4'};
    char tab2[4] = {'1','2','3','4'};
    ft_bzero(tab, 4);
    bzero(tab2, 4);
    
    printf("Mon bzero : ");
    while (i <= 3)
    {
        printf("%i ", tab[i]);
        i++;
    }
    i =0;
    printf("Original Bzero : ");
    while (i <= 3)
    {
        printf("%i ", tab2[i]);
        i++;
    }
    return (0);
}*/