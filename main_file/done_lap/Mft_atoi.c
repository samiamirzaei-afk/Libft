#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


// " " \t \n \v \f \r
//
int ft_negative_add(char *str, int *i)
{
	int negative;

	negative = 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			negative *= -1;
		*i += 1;
	}
	return (negative);
}
int	ft_isspace(char letter)
{
	if ((letter >= '\t' && letter <= '\r') || letter == ' ')
		return (1);
	return (-1);
}


int	ft_atoi(char *str)
{
	int i;
	int negative;
	int result_l;
	int result;

	i = 0;
	negative = 0;
	result_l = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	negative = ft_negative_add(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result_l = (result_l * 10) + (str[i] - '0'); 	
		i++;
	}
	result = result_l;
	return (result * negative);
}

/*
behaves like normal atoi, 
add this for 0 upon all errors: (add above return)

	if(result != result_l)
		return (0);
*/
int     main(int argc, char **argv)
{

	if (argc < 2)
	{
		printf ("please provide an argument [...]\n");
		 return (1);
	}
	printf("fake: '%d'\n", ft_atoi(argv[1]));
	printf("real: '%d'\n", atoi(argv[1]));
}
