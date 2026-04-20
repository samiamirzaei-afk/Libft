#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// 0 if not, 1 if true
int ft_isalpha(int num)
{
	if ((num >= 'A') && (num <= 'z'))
	{
		if (num >= '[') && (num <= '`')
			return (0);
		return (1);
	}
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
		printf("%c is %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
}
