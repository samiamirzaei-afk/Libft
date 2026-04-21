#define LIBBSD_OVERLAY 1

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


char	*ft_strnstr(char *hey, char *needle, int length)
{
	int i;
	int k;

	if (needle)
		return (hey);
	if (!(*hey) || length < 1)
		return ((void*)0);
	i = 0;
	k = 0;
	while(hey[i] && i < length)
	{
		k = 0;
		while(hey[i] == needle[k] && hey[i] != '\0')
		{
			i++;
			k++;
		}
		if(needle[k] == '\0')
			return(	(char*)&hey[i-k]);
		i++;
	}
	return ((void*)0);
}

int	main(int argc, char **argv)
{
	if (argc < 4)
	{
		printf ("please provide an argument [hey, needle, search_size]\n");
		return (1);
	}
/*
int	main(void)
{
	char argv[4][10];

	argv[1][0] = '\0';
	argv[2][0] = '\0';
	argv[3][0] = '5';
       	argv[3][1] = '5';
       	argv[3][2] = '\0';
	argv[4][0] = '\0';
*/
	printf("%d\n", atoi(argv[3]));
	printf("result: %s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("my result: %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
/* search_size should be long enough to be past '\0'*/
}

