/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:19:42 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/13 18:09:58 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (check(base[i]) == 1 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	lenbase;

	lenbase = check_base(base);
	if (lenbase >= 2)
	{
		if (nbr < 0)
		{
			if (nbr == -2147483648)
			{
				ft_putnbr_base(nbr / lenbase, base);
				ft_putnbr_base(-(nbr % lenbase), base);
				return ;
			}
			write (1, "-", 1);
			nbr = -nbr;
		}
		if (nbr >= lenbase)
		{
			ft_putnbr_base(nbr / lenbase, base);
			ft_putnbr_base(nbr % lenbase, base);
		}
		if (nbr < lenbase)
			write (1, &base[nbr], 1);
	}
}
