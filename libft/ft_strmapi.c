/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:59:01 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:59:04 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		res = (char *)malloc(ft_strlen(s) + 1);
		if (res == NULL)
		{
			return (NULL);
		}
		while (s[i])
		{
			res[i] = f(i, s[i]);
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
// char	xy(unsigned int j, char c)
// {
// 	j = 0;
// 	return ( c+ 1);
// }

// int main()
// {
// 	const char *input = "Hello World!";
// 	char *output = ft_strmapi(input,xy);
// 	printf("input %s\n", input);
// 	printf("output %s\n", output);
// 	free(output);
// 	return (0);
// }
