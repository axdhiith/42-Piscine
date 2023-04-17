/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:02:23 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/15 16:06:57 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_counter;

void	print_all(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write (1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	g_counter++;
}

int	check_safe(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (i == row || board[i] == col)
			return (1);
		if (board[i] == i + col - row || board[i] == -i + row + col)
			return (1);
		i++;
	}
	return (0);
}

void	placing(int board[10], int col)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (check_safe(board, col, i) == 0)
		{
			board[col] = i;
			if (col == 9)
				print_all(board);
			else
				placing(board, col + 1);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	placing(board, 0);
	return (g_counter);
}
