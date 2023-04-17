/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:11:36 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/23 11:11:53 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checks(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	length(int nbr, char *base, int len)
{
	int				len_base;
	unsigned int	nb;

	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		len++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)len_base)
	{
		nb /= len_base;
		len++;
	}
	len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base, char *str)
{
	int		len_base;
	long	nb;
	int		i;
	int		len_num;

	len_base = ft_strlen(base);
	len_num = length(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_num--;
	while (nb >= len_base)
	{
		str[len_num] = base[nb % len_base];
		nb /= len_base;
		len_num--;
	}
	if (nb < len_base)
		str[i] = base[nb];
}
