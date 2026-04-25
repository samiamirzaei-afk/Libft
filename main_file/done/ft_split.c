#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char	**ft_split(char *str, char sep)
{
	int i;
	int sep_count;
	char **result;
	
	i = 0;
	sep_count = 0;
	while (str[i])
	{
		if(memchr(&str[i], sep, 1) != NULL && str[i] != '\0')
		{	
			while(memchr(&str[i], sep, 1) != NULL && str[i + 1] != '\0')
			{
			//	printf("found one at '%d', its an '%c'\n", i, str[i]);
				i++;
			}
				
			printf("stepcount added at'%d' '%c'\n", i - 1, str[i - 1]);
			if(
			sep_count++;

		}
		
		i++;
	}
	result = malloc((sep_count + 1) * sizeof(char*));
	result[sep_count] == NULL;
	i = 0;
	while(i < sep_count)
	{
		result[i] = malloc(2 * sizeof(char));
		result[i][0] = 'b';
		result[i][1] = '\0';
		i++;
	}
	printf("sep_count: '%d'\n", sep_count);
	for(i = 0; result[i] != NULL; i++)
	{
		printf("result[%d]: '%s'\n", i, result[i]);
	
	}

	return(NULL);
}
// this version is wrong because if "baaaba" is given, it will make 3 arrays, its adding the last a's before '\0'
int     main(int argc, char **argv)
{
	char	sep = 'a'; 
	char	str001[] = "ab";
	char	str002[] = "aaab";
	char	str003[] = "aaaaaaaab";
	char	str004[] = "abab";
	char	str005[] = "aaaaabaaaab";
	char	str006[] = "bab";
	char	str007[] = "baaaaab";
	char	str008[] = "aabaaab";
	char	str009[] = "b";
	char	str010[] = "ba";
	char	str011[] = "aba";

	printf("str001:'%s'\n", str001);
	ft_split(str001, sep);
	printf("\n\n");

	printf("str002:'%s'\n", str002);
	ft_split(str002, sep);
	printf("\n\n");

	printf("str003:'%s'\n", str003);
	ft_split(str003, sep);
	printf("\n\n");

	printf("str004:'%s'\n", str004);
	ft_split(str004, sep);
	printf("\n\n");

	printf("str005:'%s'\n", str005);
	ft_split(str005, sep);
	printf("\n\n");


	printf("str006:'%s'\n", str006);
	ft_split(str006, sep);
	printf("\n\n");

	printf("str007:'%s'\n", str007);
	ft_split(str007, sep);
	printf("\n\n");

	printf("str008:'%s'\n", str008);
	ft_split(str008, sep);
	printf("\n\n");

	printf("str009:'%s'\n", str009);
	ft_split(str009, sep);
	printf("\n\n");

	printf("str010:'%s'\n", str010);
	ft_split(str010, sep);
	printf("\n\n");


	printf("str011:'%s'\n", str011);
	ft_split(str011, sep);
	printf("\n\n");
}

