/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:54:37 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:54:39 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (*lst)
	{
		p = (ft_lstlast(*lst));
		p->next = &*new;
	}
	else
		*lst = new;
}
//  int main()
// {
//     t_list *head = NULL;
//  t_list node1, node2, node3;
//  node1.content =10;
//  node1.next = NULL;
//  node2.content = 40;
//  node2.next = NULL;
//  node3.content = 1;
//  node3.next = NULL;
//     ft_lstadd_back(&head, &node1);
//     ft_lstadd_back(&head, &node2);
// 	ft_lstadd_back(&head, &node3);
//     t_list *current = head;
//     while (current != NULL)
//     {
//         printf(" : %d -> ", current->content);
//         current = current->next;
//     }
// 	printf("\n");
//     return (0);
// }