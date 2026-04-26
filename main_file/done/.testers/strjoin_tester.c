/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/25 17:53:55 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


#define LIBBSD_OVERLAY	1


char *ft_substr(char const *str, unsigned int start, size_t len);



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaration of the function to test (not implemented here)
char	*ft_strjoin(const char *str1, const char *str2);

int	main()
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
	char	*ptr008 = NULL;

	result = ft_strjoin(ptr007, ptr008);
	printf("str1:'%s' str2:'%s'\n", ptr007, ptr008);
	printf("result: '%s'\n\n", result);
	free(result);
	

	char	*ptr009 = NULL;
	char	ptr010[] = {"hey"};

	result = ft_strjoin(ptr009, ptr010);
	printf("str1:'%s' str2:'%s'\n", ptr009, ptr010);
	printf("result: '%s'\n\n", result);
	free(result);



	char	ptr011[] = {""};
	char	*ptr012 = NULL;

	result = ft_strjoin(ptr011, ptr012);
	printf("str1:'%s' str2:'%s'\n", ptr011, ptr012);
	printf("result: '%s'\n\n", result);
	free(result);



	char	*ptr013 = NULL;
	char	ptr014[] = {""};

	result = ft_strjoin(ptr013, ptr014);
	printf("str1:'%s' str2:'%s'\n", ptr013, ptr014);
	printf("result: '%s'\n\n", result);
	free(result);
	return (0);
}
