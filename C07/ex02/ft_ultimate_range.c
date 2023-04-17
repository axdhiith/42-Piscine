/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:57:56 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/16 13:20:21 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	sizer;
	int	*r;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	sizer = max - min;
	r = (int *)malloc(sizeof(int) * sizer);
	if (!r)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < sizer)
		r[i++] = min++;
	*range = r;
	return (sizer);
}
