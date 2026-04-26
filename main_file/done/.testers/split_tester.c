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
char *ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{

char	sep = 'a'; 
	char	str001[] = "abbbbbb";
	char	str002[] = "aaa";
	char	str003[] = "aaaaaaaa";
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

	char	str012[] = "";
	char	str013[] = "abcde";
	char	str014[] = "aaaaabaaaa";
	char	str015[] = "babab";
	char	str016[] = "a";
	char	str017[] = "aa";
	char	str018[] = "abaabaabaa";
	char	str019[] = "bbbbbb";
	char	str020[] = "abbbbba";
	char	str021[] = "abababab";
	char	str022[] = "aaaa";
	char	str023[] = "bbbaaa";
	char	str024[] = "ab";
	char	str025[] = "baaa";
	char	str026[] = "aabbaa";
	char	str027[] = "abcabcabc";
	char	str028[] = "   ";  // spaces (if sep is space later)
	char	str029[] = "c";   // single char matching sep
	char	str030[] = "acacac";
	char	str031[] = "a\0b\0c";
	char	str032[] = "\tbbanv,mav19874\t";

	sep = '\0';
	printf("str012:'%s' sep is '\\0'\n", str012);
	ft_split(str012, sep);
	printf("\n\n");

	printf("str013:'%s' sep is '\\0'\n", str013);
	ft_split(str013, sep);
	printf("\n\n");

	printf("str014:'%s' sep is '\\0'\n", str014);
	ft_split(str014, sep);
	printf("\n\n");

	printf("str015:'%s' sep is '\\0'\n", str015);
	ft_split(str015, sep);
	printf("\n\n");

	printf("str016:'%s' sep is '\\0'\n", str016);
	ft_split(str016, sep);
	printf("\n\n");

	sep = 'a';
	printf("str017:'%s'\n", str017);
	ft_split(str017, sep);
	printf("\n\n");

	printf("str018:'%s'\n", str018);
	ft_split(str018, sep);
	printf("\n\n");

	printf("str019:'%s'\n", str019);
	ft_split(str019, sep);
	printf("\n\n");

	printf("str020:'%s'\n", str020);
	ft_split(str020, sep);
	printf("\n\n");

	printf("str021:'%s'\n", str021);
	ft_split(str021, sep);
	printf("\n\n");

	printf("str022:'%s'\n", str022);
	ft_split(str022, sep);
	printf("\n\n");

	printf("str023:'%s'\n", str023);
	ft_split(str023, sep);
	printf("\n\n");

	printf("str024:'%s'\n", str024);
	ft_split(str024, sep);
	printf("\n\n");

	printf("str025:'%s'\n", str025);
	ft_split(str025, sep);
	printf("\n\n");

	printf("str026:'%s'\n", str026);
	ft_split(str026, sep);
	printf("\n\n");

	printf("str027:'%s'\n", str027);
	ft_split(str027, sep);
	printf("\n\n");

	printf("str028:'%s'\n", str028);
	ft_split(str028, sep);
	printf("\n\n");

	printf("str029:'%s'\n", str029);
	ft_split(str029, sep);
	printf("\n\n");

	printf("str030:'%s'\n", str030);
	ft_split(str030, sep);
	printf("\n\n");


	printf("str031:'%s'\n", str031);
	ft_split(str031, sep);
	printf("\n\n");

	printf("str032:'%s'\n", str032);
	ft_split(str032, sep);
	printf("\n\n");

	return (0);
}
