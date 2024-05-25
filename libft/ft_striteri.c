/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:58:05 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:58:06 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
	{
		return ;
	}
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void	ich(unsigned int index, char *c)
// {

// 	printf("Index : %u, char : %c\n",index,*c);
// }

// int main()
// {
// 	char	s[] = "Hello Wdha";
// 	ft_striteri(s,ich);
// 	return (0);
// }
