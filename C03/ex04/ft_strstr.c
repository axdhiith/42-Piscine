/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:03:39 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/13 14:19:09 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		while (str[i + j] && (str[i + j] == to_find[j]))
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
