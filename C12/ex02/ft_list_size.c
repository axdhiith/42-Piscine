/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:53:43 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/24 12:03:56 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*traverser;

	count = 0;
	traverser = begin_list;
	while (traverser->next != NULL)
	{
		count++;
		traverser = traverser->next;
	}
	return (++count);
}


/*
void display(t_list *begin_list)
{
  while(begin_list != NULL)
  {
    printf("%d", *(int *)begin_list->data);
    begin_list = begin_list->next;
  }
}
t_list *ft_create_elem(void *data)
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
  t_list *head = NULL;
  int a = 13;
  int b = 3;
  int c = 7;
  void *d = &a;
  void *e = &b;
  void *f = &c;
  head = (t_list *)malloc(sizeof(t_list));
  head = ft_create_elem(d);
  head->next = ft_create_elem(e);
  head->next->next =ft_create_elem(f);
  display(head);
  printf("%d", ft_list_size(head));
  return 0;
} */ 
