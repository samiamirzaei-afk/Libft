#include "libft.h"

char *ft_strdup(char *src)
{
	int length;
	char *copy;
	int i;
	
	i = 0;
//	length = ft_strlen(src);
	length = strlen(src);
	copy = malloc((length + 1) * sizeof(char));
	if(copy == NULL)
		return(NULL);
	copy[length] = '\0';
	while(src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	return(copy);
}


int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		printf("please only add one argument");
		return(1);
	}


	char *str;

	str = ft_strdup(argv[1]);
	printf("%s\n", str);
	free(str);
}
