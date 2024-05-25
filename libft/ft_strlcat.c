/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:58:20 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:58:22 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// int main()
// {
// 	char src[] = "isbeautifal";
// 	char dst[] = "lolo";

// 	size_t c = ft_strlcat(dst,src,0);
// 	printf("conactnate  all dest with sized src %s\n",dst);
// 	printf("length of dst & src %zu\n" , c);
// 	return (0);
// }
