/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:09:58 by maalamer          #+#    #+#             */
/*   Updated: 2024/05/05 12:10:01 by maalamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list **stackA)
{
	int		min;
	t_list	*node;

	node = *stackA;
	min = 2147483647;
	while (node != NULL)
	{
		if (min > node->content)
			min = node->content;
		node = node->next;
	}
	return (min);
}

int	find_min_index(t_list **stackA)
{
	int		min;
	t_list	*node;

	node = *stackA;
	min = 2147483647;
	while (node != NULL)
	{
		if (min > node->index)
			min = node->index;
		node = node->next;
	}
	return (min);
}

int	find_max(t_list **stackA)
{
	int		max;
	t_list	*node;

	node = *stackA;
	max = -2147483648;
	while (node != NULL)
	{
		if (max < node->content)
			max = node->content;
		node = node->next;
	}
	return (max);
}

int	find_max_index(t_list **stackA)
{
	int		max;
	t_list	*node;

	node = *stackA;
	max = -2147483648;
	while (node != NULL)
	{
		if (max < node->index)
			max = node->index;
		node = node->next;
	}
	return (max);
}

void	pback(t_list **stackA, t_list **stackB)
{
	t_list	*b;
	int		max;

	b = *(stackB);
	while (ft_lstsize(*stackB) > 0)
	{
		max = find_max_index(stackB);
		if ((b)->index == max)
			pa(stackB, stackA);
		else
		{
			if (find_length_index(stackB, max) >= (ft_lstsize(*stackB) / 2))
				rrb(stackB);
			else
				rb(stackB);
		}
		b = *(stackB);
	}
}
