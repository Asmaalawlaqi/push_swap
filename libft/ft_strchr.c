/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:57:40 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:57:42 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	if(c > 127)
// 		return((char *)s);
// 	if ((char)c == '\0')
// 	{
// 		return ((char *)s);
// 	}
// 	while (*s != c)
// 	{
// 		if (*s != '\0')
// 		{
// 			s++;
// 		}
// 		else{
// 	return (NULL);
// 	}
// 	}
// 		return ((char *)s);
// }

// int main()
// {
// 	const char * s = "hello wadha";
// 	int c = "p";
// 	char* res = ft_strchr(s,c);
// 	printf("%s\n",res);
// 	res = strchr(s,c);
// 	printf("%s\n",res);
// 	return(0);
// }
