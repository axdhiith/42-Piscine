/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:15:36 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/14 17:22:29 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi_base(char *str, char *base)
{
	int	lenbase;
	int	i;
	int	neg;
	int	nb;

	nb = 0;
	i = 0;
	neg = 1;
	lenbase = check_base(base);
	if (lenbase >= 2)
	{
		while (str[i] && check(str[i]) == 1)
			i++;
		while (str[i] && (str[i] == '+' || str[i] == '-'))
		{
			if (str[i++] == '-')
				neg *= -1;
		}
		while (str[i] && find_name(base, str[i]) >= 0)
		{
			nb = (nb * lenbase) + (find_name(base, str[i]));
			i++;
		}
	}
	return (nb * neg);
}
