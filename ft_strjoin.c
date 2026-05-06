/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:19:30 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/06 09:36:42 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcopy(char *result, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
}

char	*ft_strjoin(const char *str1, const char *str2)
{
	int		len1;
	int		len2;
	char	*result;

	if (!str1 || !str2)
		return (NULL);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len1 + len2] = '\0';
	ft_strcopy(&result[0], str1);
	ft_strcopy(&result[len1], str2);
	return (result);
}
/*
#include <unistd.h>
#include <stdio.h>
int     main(int argc, char **argv)
{
        if (argc < 2)
        {
                printf ("please provide an 2 strings \n");
                return (1);
        }
        char *result = ft_strjoin(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);
}
*/
/*
int	main(void)
{
	char	ptr001[] = {"012345"};
	char	ptr002[] = {"6789"};
	char	*result;

	result = ft_strjoin(ptr001, ptr002);
	printf("str1:'%s' str2:'%s'\n", ptr001, ptr002);
	printf("result: '%s'\n\n", result);
	free(result);

	char	ptr003[] = {""};
	char	ptr004[] = {"6789"};

	result = ft_strjoin(ptr003, ptr004);
	printf("str1:'%s' str2:'%s'\n", ptr003, ptr004);
	printf("result: '%s'\n\n", result);
	free(result);


	char	ptr005[] = {""};
	char	ptr006[] = {""};

	result = ft_strjoin(ptr005, ptr006);
	printf("str1:'%s' str2:'%s'\n", ptr005, ptr006);
	printf("result: '%s'\n\n", result);
	free(result);


	char	ptr007[] = {"hey"};
	char	ptr008[] ={NULL};

	result = ft_strjoin(ptr007, ptr008);
	printf("str1:'%s' str2:'%s'\n", ptr007, ptr008);
	printf("result: '%s'\n\n", result);
	free(result);


	char	ptr009[] = {NULL};
	char	ptr010[] = {"hey"};

	result = ft_strjoin(ptr009, ptr010);
	printf("str1:'%s' str2:'%s'\n", ptr009, ptr010);
	printf("result: '%s'\n\n", result);
	free(result);



	char	ptr011[] = {""};
	char	ptr012[] = {NULL};

	result = ft_strjoin(ptr011, ptr012);
	printf("str1:'%s' str2:'%s'\n", ptr011, ptr012);
	printf("result: '%s'\n\n", result);
	free(result);



	char	ptr013[] = {NULL};
	char	ptr014[] = {""};

	result = ft_strjoin(ptr013, ptr014);
	printf("str1:'%s' str2:'%s'\n", ptr013, ptr014);
	printf("result: '%s'\n\n", result);
	free(result);
}*/
