/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:25:30 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/24 11:35:57 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node);
	node->next = NULL;
	node->data = data;
	return (node);
}



/* #include <stdio.h>
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
  t_list *Node;
  int a = 1337;
  void *ptr = &a;
  Node = ft_create_elem(ptr);
  display(Node);
  return 0;
} */
