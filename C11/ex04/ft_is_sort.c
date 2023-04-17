/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:35:19 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/22 17:03:01 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_sorted;

	i = 0;
	is_sorted = 1;
	while (i < length - 1 && is_sorted != 0)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			is_sorted = 0;
		i++;
	}
	if (is_sorted != 1)
	{
		i = 0;
		is_sorted = 1;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
