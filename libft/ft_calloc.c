/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:53:30 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:53:32 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((size != 0) && (count > (SIZE_MAX / size)))
		return (NULL);
	ptr = malloc(count * size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, count * size);
	}
	return (ptr);
}
