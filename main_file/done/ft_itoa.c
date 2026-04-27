#include "libft.h"

static void ft_temp_fill(int *i, int *count, int **temp)
{
	
	while(count > 9)
	{
		temp[i] = count % 10;
		count /= 10; 
		i++;
	}
		temp[i] = count;
		i++;



}

char	*ft_itoa(int count)
{
	char	*result;
	int	temp[13];
	int	i;
	int	j;

	i = 1;
	j = 0;
	temp[0] = -1;
	ft_temp_fill(&i , &count, &temp)
/*	while(count > 9)
	{
		temp[i] = count % 10;
		count /= 10; 
		i++;
	}
		temp[i] = count;
		i++;
*/
	result = malloc((i) * sizeof(char));
	if(result == NULL)
	       return (NULL);	
	result[i - 1] = '\0';
	i = i - 1;
	while(temp[i] != -1)
	{
		result[j] = temp[i] + '0';
		i--;
		j++;
	}
	return (result);	
}
