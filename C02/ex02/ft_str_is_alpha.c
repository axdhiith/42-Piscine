/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:50:17 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/07 15:06:30 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
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
