/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:35:17 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/11 16:16:42 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb >= 1)
		{
			fact *= nb;
			nb--;
		}
	}
	return (fact);
}
