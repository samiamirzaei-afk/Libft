#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

static int ft_checks(nmemb, size)
{
	if (nmemb <= 0 || size <= 0)
		return (NULL);
 

}


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	if( ft_checks(nmemb, size) == NULL)
		return (NULL);

	if ((result = malloc(nmemb * size)) == NULL)
		return (NULL);
	return (result);
}
int	main(void)
{
	ft_calloc(10 ,10);


}
