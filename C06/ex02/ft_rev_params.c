/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:30:37 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/11 18:51:50 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_prints(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc - 1;
	while (j >= 1)
	{
		i = 0;
		while (argv[j][i] && argc)
		{
			ft_prints(argv[j][i]);
			i++;
		}
		ft_prints('\n');
		j--;
	}
	return (0);
}
