/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:28:31 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/16 11:43:35 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*ptr;
	int	i;

	range = max - min;
	if (max <= min)
		return (0);
	ptr = (int *)malloc(sizeof(int) * range);
	if (!ptr)
		return (0);
	i = 0;
	while (i < range)
		ptr[i++] = min++;
	return (ptr);
}
