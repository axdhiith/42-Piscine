/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:34:32 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/10 22:55:53 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fnputchar(char c)
{
	write (1, &c, 1);
}

int	isprintable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	else
		return (1);
}

void	conv_hex(int num, int flag)
{
	char	*base;

	base = "0123456789abcdef";
	if (num <= 0 && flag == 0)
		num += 256;
	if (num >= 16)
	{
		conv_hex(num / 16, 1);
		conv_hex(num % 16, 1);
	}
	else
	{
		if (flag == 0)
			fnputchar('0');
		fnputchar(base[num]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (isprintable(str[i]) == 1)
			fnputchar(str[i]);
		else
		{
			fnputchar('\\');
			num = str[i];
			conv_hex(num, 0);
		}
		i++;
	}
}
