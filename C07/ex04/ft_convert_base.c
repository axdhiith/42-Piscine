/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:10:48 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/23 11:48:41 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		checks(char c);
void	ft_putnbr_base(int nbr, char *base, char *nbrf);
int		length(int nbr, char *base, int lenght);

int	whitespaces(char *str, int *skippedindex)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (checks(str[i]) == 1)
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*skippedindex = i;
	return (sign);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (checks(base[i]) == 1 || base[i] == '+' || base[i] == '-')
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

int	find_name(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	numf;
	int	count;
	int	nb;
	int	len_base;

	numf = 0;
	i = 0;
	len_base = check_base(base);
	if (len_base >= 2)
	{
		count = whitespaces(str, &i);
		nb = find_name(base, str[i]);
		while (nb != -1)
		{
			numf = (numf * len_base) + nb;
			i++;
			nb = find_name(base, str[i]);
		}
		return (numf *= count);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		len_num;
	char	*d;

	if (check_base(base_to) == 0 || check_base(base_from) == 0)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	len_num = length(nb, base_to, 0);
	d = (char *)malloc(sizeof(char) * (len_num + 1));
	if (!d)
		return (0);
	ft_putnbr_base(nb, base_to, d);
	d[len_num] = '\0';
	return (d);
}
