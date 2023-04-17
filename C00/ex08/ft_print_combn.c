/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:57:45 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/06 14:23:54 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	pass(char*n, int num)
{
	int		a;
	int		b;
	int		c;

	a = 1;
	b = 0;
	while (b < num)
	{
		c = b + 1;
		while (c < num)
		{
			if (n[b] == n[c] || n[b] > n[c])
				a = 0;
			c++;
		}
		b++;
	}
	return (a);
}

void	add(char*a, int n)
{
	int		i;

	i = n - 1;
	while (i >= 0)
	{
		if (a[i] < '9')
		{
			a[i]++;
			return ;
		}
		else
		{
			a[i] = '0';
			i--;
		}
	}
}

int	end(char*num, int n)
{
	int		bol;
	int		b;
	char	a;

	bol = 0;
	b = n - 1;
	a = '9';
	while (b >= 0)
	{
		if (num[b] == a)
		{
			b--;
			a--;
			if (b == -1)
				bol = 1;
		}
		else
			return (bol);
	}
	return (bol);
}

void	ft_print_combn(int n)
{
	char	num[n];
	int		i;
	int		product;

	i = 0;
	product = 1;
	while (i < n)
	{
		product *= 10;
		num[i] = '0';
		i++;
	}
	i = 0;
	while (i < product)
	{
		if (pass (num, n) == 1)
		{
			write (1, num, n);
			if (end (num, n) == 1)
				return ;
			write (1, ", ", 2);
		}
		add (num, n);
		i++;
	}
}
/*int main()
{
	ft_print_combn(9);
}*/
