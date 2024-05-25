/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:54:51 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:54:54 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (lst)
	{
		while (*lst)
		{
			t = (*lst)->next;
			del(*lst);
			*lst = t;
		}
	}
}
// void	del_str(void *content)
// {
// 	if (content);
// 	free (content);
// }

// int	main(void)
// {
// 	t_list	*node1 = malloc(sizeof(t_list));
// 	t_list	*node2 = malloc(sizeof(t_list));
// 	t_list	*node3 = malloc(sizeof(t_list));

// node1 ->content = ft_strdup("wadha");
// node1 -> next = node2;
// node2 ->content = ft_strdup("is");
// node2 -> next = node3;
// node3 ->content = ft_strdup("smart");
// node3 -> next = NULL;

// 	printf("orginal list : %s -> %s -> %s\n", node1->content, node2->content,
// 		node3->content);
// ft_lstclear(&node1, &del_str);
// printf("after deleting: list is empty ");

// }
