/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:10:25 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/24 19:18:39 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*node;

	i = 0;
	while (begin_list->next != NULL && i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	if (i == nbr)
		return (begin_list);
	return (0);
}



/* t_list *ft_create_elem(void *data)
{
	t_list* new_node;
	
	new_node = (t_list*)malloc(sizeof(t_list));
	if(new_node)
	{
		new_node->data = data;
		new_node->next = NULL;
	}
	return (new_node);
}
int main()
{
	int a = 1, b = 3, c = 3, x= 7, z = 4, l = 2;
	void*	d =&a;
	void*	e =&b;
	void*	f = &c;
	void*	i = &x;
	void*   y = &z;
	void*	w = &l;
	t_list* head=(t_list*)malloc(sizeof(t_list));
	head = ft_create_elem(d);
	head->next = ft_create_elem(e);
	head->next->next = ft_create_elem(f);
	head->next->next->next = ft_create_elem(i);
	head->next->next->next->next = ft_create_elem(y);
	head->next->next->next->next->next= ft_create_elem(w);
	printf("%d\n", *(int *)ft_list_at(head, 0)->data);
	printf("%d\n", *(int *)ft_list_at(head, 1)->data);
	printf("%d\n", *(int *)ft_list_at(head, 2)->data);
	printf("%d\n", *(int *)ft_list_at(head, 3)->data);
	printf("%d\n", *(int *)ft_list_at(head, 4)->data);
	printf("%d", *(int *)ft_list_at(head, 5)->data);
	return(0);
} */
