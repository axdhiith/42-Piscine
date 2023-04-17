/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:43:41 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/16 16:58:12 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	length(char **strs, int size, char *sep)
{
	int	i;
	int	count;
	int	len_sep;

	if (size < 0)
		return (-1);
	i = 0;
	count = 0;
	len_sep = ft_strlen(sep);
	while (i < size)
		count += ft_strlen(strs[i++]);
	count += ((size - 1) * len_sep);
	return (count);
}

char	*joiningstr(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tlen;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	tlen = length(strs, size, sep);
	str = (char *)malloc((sizeof(char) * tlen) + 1);
	if (!str)
		return (NULL);
	i = 0;
	*str = 0;
	while (i < size)
	{
		joiningstr(str, strs[i]);
		if (i < size - 1)
			joiningstr(str, sep);
		i++;
	}
	return (str);
}
