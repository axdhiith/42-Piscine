/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:01:06 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/24 19:07:06 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill(unsigned int address, int vals[], int i)
{
	if (address >= 16)
		fill(address / 16, vals, i + 1);
	vals[i] = address % 16;
}

void	hexad(unsigned int address, int chars)
{
	int	vals[15];
	int	i;

	i = -1;
	while (i++ < 15)
		vals[i] = 0;
	fill(address, vals, 0);
	i = -1;
	while (i++ < chars)
		write(1, &"0123456789abcdef"[vals[chars - i]], 1);
}

void	contenthex(char *content, void *addr, unsigned int size)
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		if (addr + size <= (void *)(content + i))
			write(1, "  ", 2);
		else
			hexad((unsigned int) *(content + i), 1);
		if (i % 2 == 1)
			write(1, " ", 1);
	}
}

void	contentnorm(char *content, void *addr, unsigned int size)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (addr + size > (void *)(content + i))
		{
			if (content[i] >= ' ' && content[i] < 127)
				write(1, &content[i], 1);
			else
				write(1, ".", 1);
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*track;

	track = (char *) addr;
	while ((void *) track < (addr + size))
	{
		hexad((unsigned int)track, 15);
		write(1, ": ", 2);
		contenthex(track, addr, size);
		contentnorm(track, addr, size);
		write(1, "\n", 1);
		track += 16;
	}
	return (addr);
}
