/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:33:55 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/11 16:12:40 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	bisearch(int nb)
{
	int	start;
	int	end;
	int	mid;

	start = 0;
	end = 46340;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

int	ft_sqrt(int nb)
{
	int	num;

	num = bisearch(nb);
	if (num != -1)
		return (num);
	else
		return (0);
}
