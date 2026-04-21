#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define LIBBSD_OVERLAY 1

//		dest[20]          src[4]           20
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{

	size_t	i;
	size_t	k;

	while(dest[i] != '\0')
		i++;
	while(src[k] != '\0' && i < size)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	return (size);	

}

int     main(void)
{
        
      char dest[20] = {"somm"};
      char src[] = {"time"};
       
      char dest2[20] = {"somm"};
      char src2[] = {"time"};
       
        
	printf("og:\n result:%d\n dest: %s\n", strlcat(dest, src, 20), dest);
	printf("me:\n result:%d\n dest: %s\n", ft_strlcat(dest2, src2, 20), dest2);

}



