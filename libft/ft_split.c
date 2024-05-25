/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:57:31 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:57:34 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_undoalloc(char *s, int i)
{
	while (i >= 0)
	{
		free(&s[i]);
		i--;
	}
	free(s);
}

static int	ft_worddet(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_cpystr(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	str = (char *)ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (0);
	ft_memcpy(str, s, i);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**split;

	if (!s)
		return (0);
	count = ft_worddet(s, c);
	split = (((char **)malloc(sizeof(char *) * (count + 1))));
	if (!split)
		return (0);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		split[i] = ft_cpystr(s, c);
		if (!split[i])
			ft_undoalloc(*split, i);
		s += ft_strlen(split[i]);
		i++;
	}
	split[i] = 0;
	return (split);
}

// int	main(void)
// {
// 	const char *str = ",,,,He,is,samrt,boy";
// 	char delimiter = ',';
// 	int i = 0;

// 	char **result = ft_split(str, delimiter);

// 	while (result[i])
// 	{
// 		printf("Word %d: %s\n", i, result[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		free(result[i]);
// 		i++;
// 	}

// 	free(result);
// 	return (0);
// }
