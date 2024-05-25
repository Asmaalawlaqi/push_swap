/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:59:11 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:59:12 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int main()
// {
// unsigned char * s1 = " ";
// unsigned char * s2 = "AaAtyAlo wadha";
// 	int res = ft_strncmp(s1,s2,3);
// 	printf("%d\n",res);
// 	return(0);
// }
