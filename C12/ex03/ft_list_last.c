/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:05:52 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/24 12:12:25 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*traverser;

	traverser = begin_list;
	while (traverser->next != NULL)
		traverser = traverser->next;
	return (traverser);
}



/* void display(t_list *begin_list)
{
    while(begin_list != NULL)
    {
      printf("%d\n", *(int *)begin_list->data);
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
  t_list *head;
  int a = 4;
  int b = 2;
  int c = 1337;
  void* ptr = &a;
  void* pt = &b;
  void* p = &c;
  head = (t_list *)malloc(sizeof(t_list));
  head = ft_create_elem(ptr);
  head->next = ft_create_elem(pt);
  head->next->next = ft_create_elem(p);
  display(head);
  display(ft_list_last(head));
  return 0;
} */
