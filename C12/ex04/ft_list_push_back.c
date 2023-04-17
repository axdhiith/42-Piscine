/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:13:04 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/24 12:34:45 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_node;
	t_list	*traverser;

	new_node = ft_create_elem(data);
	traverser = *begin_list;
	while (traverser->next != NULL)
		traverser = traverser->next;
	traverser->next = new_node;
}



/*
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

void display(t_list *begin_list)
{
    while(begin_list != NULL)
    {
      printf("%d\n", *(int *)begin_list->data);
      begin_list = begin_list->next;
    }
}
int main() 
{
  t_list *head;
  head = (t_list*)malloc(sizeof(t_list));
  int a =1;
  int b=3;
  int c = 37;
  void *ptr=&a;
  void *pt = &b;
  void *p = &c;
  head = ft_create_elem(ptr);
  head->next= ft_create_elem(pt);
  ft_list_push_back(&head, p);
  display(head);
  return 0;
} */
