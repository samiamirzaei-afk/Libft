#include <stdio.h>

int	ft_toupper(int num)
{
	if (num >= 'a' && num <= 'z')
		return (num - 32);
	return (num);
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
		printf("%c is %c\n", argv[1][i], ft_toupper(argv[1][i]));
		i++;
	}
}

