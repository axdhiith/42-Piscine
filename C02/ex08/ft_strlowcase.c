/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:42:02 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/07 17:45:03 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			c = str[i];
			c += 32;
			str[i] = c;
		}
		i++;
	}
	return (str);
}
