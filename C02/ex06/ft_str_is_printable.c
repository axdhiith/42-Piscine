/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:22:32 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/07 15:49:00 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if ((*str >= 32 && *str <= 126))
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
