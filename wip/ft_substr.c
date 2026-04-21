#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(const char *str, unsigned int start, size_t length)
{
	char	*result;
	int	i;

	i = 0;
	result = malloc((length + 1) * (sizeof(char)));
	while (i < length)
	{
		result[i] = str[start];
		i++;
		start++;
	}
	return (result);
}

int     main(int argc, const char **argv)
{
        if (argc < 2)
        {
                printf ("please provide an arguments [string, start, length]\n");
                return (1);
        }
	
	printf("Og string: %s, start: %d, length: %d\nresult: '%s'\n", argv[1], atoi(argv[2]), atoi(argv[3]), ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));

}



/*
s -> the string from which to create the substring.
start -> start index of the substr in the s.
len -> maximum lenght of the substr.
the function return the substr.

int	main(void)
{
	char const		*d = "daje-roma-daje";
	unsigned int	f = 4;
	size_t			l = 8;

	printf("%s\n", ft_substr(d, f, l));
}
*/
