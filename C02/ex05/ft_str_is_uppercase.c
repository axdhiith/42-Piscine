/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:17:01 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/07 15:19:34 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if ((*str >= 65 && *str <= 90))
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
