#include "libft.h"

void *memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *dst1;
    unsigned const char     *src1;
    size_t  i;

    if (!src && !dst)
        return (NULL);
    dst1 = (unsigned char *)dst;
    src1 = (unsigned const char *)src;
    
    i = 0;
    if (dst1 > src)
    {
        while (len--)
            dst1[len] = src1[len];
    }
    else
    {
        while (i++ < len)
            dst1[i] = src1[i];
    }
    return (dst);
}
