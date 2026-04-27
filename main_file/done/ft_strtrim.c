#include "libft.h"

static int ft_needle_check(char hey, const char *needles)
{
	int i;

	i = 0;
	while(needles[i])
	{
		if(hey == needles[i])
			return (1);	
		i++;
	}
	return(-1);
}


char	*ft_strtrim(const char *hey, const char *needles)
{
	int i;
	int needle_i;
	int hey_len;
	char *result;
	i = 0;
	needle_i = 0;
	if(!hey || !needles)
		return(NULL);
	while(hey[i])
	{
		while(hey[i] && (ft_needle_check(hey[i], needles) == 1))
		{
			i++;
			needle_i++;
		}
		while(hey[i] && (ft_needle_check(hey[i], needles) == -1))
			i++;
	}
	hey_len = strlen(hey);
	hey_len -= needle_i;
	result = malloc( (hey_len + 1) * sizeof(char));
	if(!result)
		return(NULL);
	result[hey_len];
	i = 0;
	needle_i = 0;
	while(needle_i < hey_len && hey[i])
	{
		while(hey[i] && (ft_needle_check(hey[i], needles) == 1))
			i++;
		while(hey[i] && (ft_needle_check(hey[i], needles) != 1))
		{
			result[needle_i] = hey[i];
			i++;
			needle_i++;
		}
	}
	return(result);
}
/*
int	main()
{
	
	char	*sep01 = (void*)0;
	char	sep02[] = "aeiuo";
	char	str001[] = "hello world I am a computer";
	char	str002[] = "Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich, Von 99 Luftballons Auf ihrem Weg zum Horizont. Denkst du vielleicht grad′ an mich?";
	char	str003[] = "üüüüü";
	char	*result;

	result = ft_strtrim(str001, sep01);
	printf("str1:'%s' sep:'%s'\n", str001, sep01);
	printf("result: '%s'\n\n", result);

	
	result = ft_strtrim(str001, sep02);
	printf("str1:'%s' sep:'%s'\n", str001, sep02);
	printf("result: '%s'\n\n", result);
	
	
	result = ft_strtrim(str002, sep02);
	printf("str1:'%s' sep:'%s'\n", str001, sep02);
	printf("result: '%s'\n\n", result);


	printf("'%d'\n", str003[1]);
}
*/
