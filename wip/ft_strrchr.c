#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}


char	*ft_strrchr(const char *str, int num)
{
	int	str_length;

	str_length = (ft_strlen(str)) + 1;
	while (str_length >= 0)
	{
		if(str[str_length] == num)
			return (&str[str_length]);
		str_length--;
	}
	return (NULL);
}

int     main(int argc, const char **argv)
{
        if (argc < 2)
        {
                printf ("please provide an arguments [string, needle]\n");
                return (1);
        }
	
	printf("Og string: %s, start: %c\nresult: '%s'\n", argv[1], argv[2][0], ft_strrchr(argv[1], argv[2][0]));

}

