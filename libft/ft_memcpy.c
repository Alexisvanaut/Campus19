#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char          *dest1;
    const unsigned char    *src1;
    size_t                 i;

    if (!dst || !src)
        return (dst);
    i = 0;
    dest1 = (unsigned char *)dst;
    src1 = (const unsigned char *)src;
    while (i < n)
    {
        dest1[i] = src1[i];
        i++;
    }
    return (dst);
}