#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>



void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char    *d;
    unsigned char    *s;
    size_t            i;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

void    *ft_memcpyP(void *dest, const void *src, size_t n)
{
    unsigned char    *d;
    unsigned char    *s;
    size_t            i;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

int    main(void)
{
    char    real[100] = "ABCDEFGHIJ";
    char    fake[100] = "ABCDEFGHIJ";
    char    help[100] = "ABCDEFGHIJ";
    int len = 16;

    printf("string: %s\n\n", real);
    memmove(real + 2, real, len);
    printf("memmove: %s\n", real);
    
	memcpy(help + 2, help, len);
    printf("memcpy: %s\n", real);

    ft_memcpyP(fake + 2, fake, len);
	  printf("ft_memcpy: %s\n", fake);
}
