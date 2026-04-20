#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int num)
{
	if (num >= 0 && num <= 127)
		return (1);
	return (0);
}

int     main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf ("please provide an argument [...]\n");
		 return (1);
	}
	int i = 0;
	while(argv[1][i] != '\0')
	{
		printf("%c is %d\n", argv[1][i], isascii(argv[1][i]));
		i++;
	}
}

