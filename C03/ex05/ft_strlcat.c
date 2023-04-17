/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:49:03 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/13 14:29:27 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lendest;
	unsigned int	lensrc;

	i = 0;
	j = 0;
	lensrc = ft_strlen(src);
	while (dest[i])
		i++;
	lendest = i;
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	while (src[j] && (j < size - lendest - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lendest + lensrc);
}
