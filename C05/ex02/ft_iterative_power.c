/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:54:33 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/11 16:15:03 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	prod;

	i = 1;
	prod = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i <= power)
		{
			prod *= nb;
			i++;
		}
	}
	return (prod);
}
