/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:11:46 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/07 15:16:34 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if ((*str >= 97 && *str <= 122))
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
