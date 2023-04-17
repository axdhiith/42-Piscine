/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:38:02 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/24 12:04:45 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (*begin_list)
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
	}
	else
		*begin_list = new_node;
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
void display(t_list* n)
{
  while(n != NULL)
  {
    printf("%d",*(int *)n->data);
    n = n->next;
  }
}
int main()
{
  t_list* head;
  head = (t_list *)malloc(sizeof(t_list));
  head = NULL;
  int a = 13;
  int b = 3;
  int c = 7;
  void *ptr = &a;
  void *p = &b;
  void *pt = &c;
  ft_list_push_front(&head, ptr);
  ft_list_push_front(&head, p);
  ft_list_push_front(&head, pt);
  display(head);
  return 0;
}
*/
