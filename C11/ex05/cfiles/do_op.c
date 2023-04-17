/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:38:37 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/22 11:38:32 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

int	operation(int a, char *c, int b)
{
	int	ans;
	int	(*o[5])(int a, int b);

	ans = 0;
	o[0] = &ft_add;
	o[1] = &ft_sub;
	o[2] = &ft_mult;
	o[3] = &ft_div;
	o[4] = &ft_mod;
	if (*c == '+')
		ans = (o[0])(a, b);
	else if (*c == '-')
		ans = (o[1])(a, b);
	else if (*c == '*')
		ans = (o[2])(a, b);
	else if (*c == '/')
		ans = (o[3])(a, b);
	else if (*c == '%')
		ans = (o[4])(a, b);
	return (ans);
}

void	compilation_of_all(char *n1, char *op, char *n2)
{
	int	a;
	int	b;
	int	ans;

	a = ft_atoi(n1);
	b = ft_atoi(n2);
	ans = 0;
	if (!(*op == '+' || *op == '-' || *op == '*' || *op == '/' || *op == '%'))
		write (1, "0", 1);
	else if (b == 0 && *op == '/')
		write (1, "Stop : division by zero", 23);
	else if (b == 0 && *op == '%')
		write (1, "Stop : modulo by zero", 21);
	else
	{
		ans = operation (a, op, b);
		ft_putnbr(ans);
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		compilation_of_all(argv[1], argv[2], argv[3]);
	return (0);
}
