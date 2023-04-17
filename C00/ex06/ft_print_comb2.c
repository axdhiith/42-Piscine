/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:50:48 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/06 12:52:46 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar (a / 10 + '0');
			ft_putchar (a % 10 + '0');
			write (1, " ", 1);
			ft_putchar (b / 10 + '0');
			ft_putchar (b % 10 + '0');
			if (a != 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*int main()
{
	ft_print_comb2();
}*/
