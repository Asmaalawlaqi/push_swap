/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:42:14 by wahmed            #+#    #+#             */
/*   Updated: 2023/11/02 17:27:45 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2na(t_list **stackA)
{
	t_list	*node;
	int		n1;
	int		n2;     // sort2  swap

	node = *stackA;
	n1 = node->content;
	n2 = node->next->content;
	if (n1 > n2)
		sa(stackA);
}

void	sort3n(t_list **stackA)
{
	int	n1;
	int	n2;
	int	n3;
//sort3 ---> اذا كان ان ون  اصغر من  ان تو  و ان تو اصغر من ان ثري   مرتبين حلوين 
	n1 = (*stackA)->content;
	n2 = (*stackA)->next->content;
	n3 = (*stackA)->next->next->content;
	if ((n1 < n2) && (n2 < n3) && (n1 < n3))
		return ;
	if ((n1 > n2) && (n2 < n3) && (n1 < n3))     // بس اذا كان  ان ون  اكبر  من ان تو و ان تو اصغر  من ان ثري  و ان ون   اصغر من ان ثري  نسوي سواب 
		sa(stackA);
	else if ((n1 > n2) && (n2 > n3) && (n1 > n3)) 
	{
		sa(stackA);     بس اذا كان  ان ون اكبر من ان تو و ان تو اكبر من ان ثري وان ون اكبر من ان ثري  سواب مع ريفيرس روتيت
		rra(stackA);
	}
	else if ((n1 < n2) && (n2 > n3) && (n1 > n3)) //ان ون اصغر  من ان تو  و ان تو اكبر من ان ثري وان ون  اكبر من ان ثري  سوي ريفيرس  روتيت
		rra(stackA);
	else if ((n1 < n2) && (n2 > n3) && (n1 < n3))  //  ان ون  اصغر من ان تو  وان تو اكبر من ان ثري وان وان  اصغر من  ان  ثري  بسوي  سواب وروتيت 
	{
		sa(stackA);
		ra(stackA);
	}
	else if ((n1 > n2) && (n2 < n3) && (n1 > n3))  //   سوي لي روتيت اذا ان واحد اكبر  من  ان ثنين  وان ثنين اصغر من ان ثلاثه وان واحد  اكبر من ان ثلاثه 
		ra(stackA);
}

void	sort4n(t_list **stackA, t_list **stackB)
{
	int	min;

	min = find_min(stackA);
	while ((*stackA)->content != min)    // دور لي اصغر رقم   اذا ماكان اصغر واحد  سوي لي روتيت  بس اذا كان اصغر واحد حط لي  بش بي  بعدين استعمل لي سورت 3
	{
		ra(stackA);
	}
	pb(stackA, stackB);
	sort3n(stackA);
	pa(stackB, stackA);
}

void	sort5n(t_list **stackA, t_list **stackB)
{
	int	min;

	min = find_min(stackA);
	while ((*stackA)->content != min)
	{
		if (find_length_min(stackA) > ft_lstsize(*stackA) / 2)  //    اذا ماكان اصغر واحد  يدخل  اللوب جوف اصغر واحد  
			rra(stackA);
		else
			ra(stackA);
	}
	pb(stackA, stackB);
	min = find_min(stackA);
	while ((*stackA)->content != min) //   تقسيم  2 لوب   بتاخذ سايز اصغر  لين اخر واحد مع طول الستاك  كامل 
	{
		if (find_length_min(stackA) > (ft_lstsize(*stackA) / 2)) اذا هذا الشرط صح حط لي  ريفيرس روتيت 
			rra(stackA);
		else
			ra(stackA);  اذا كان اصغر حط لي روتيت 
	}
	pb(stackA, stackB);
	sort3n(stackA);
	pa(stackB, stackA);
	pa(stackB, stackA);
}
