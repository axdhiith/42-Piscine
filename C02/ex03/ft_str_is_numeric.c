/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:04:31 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/07 15:11:16 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (*str >= 48 && *str <= 57)
		{
			str++;
			continue ;
		}
		else
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}
