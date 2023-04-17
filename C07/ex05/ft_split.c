/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:56:38 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/18 19:30:11 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (-1);
}

int	total_words(char *str, char *charset)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (str[i])
	{
		while (str[i] && check_sep(charset, str[i]) == 0)
			i++;
		if (str[i])
			num_words++;
		while (str[i] && check_sep(charset, str[i]) == -1)
			i++;
	}
	return (num_words);
}

int	length(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && check_sep(charset, str[i]) == -1)
		i++;
	return (i);
}

char	*copyword(char *str, char *charset)
{
	int		word_length;
	int		i;
	char	*aword;

	i = 0;
	word_length = length(str, charset);
	aword = (char *)malloc(sizeof(char) * (word_length + 1));
	while (i < word_length)
	{
		aword[i] = *str;
		i++;
		str++;
	}
	aword[i] = '\0';
	return (aword);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**words;
	int		tot_words;

	tot_words = total_words(str, charset);
	words = (char **)malloc(sizeof(char *) * (tot_words + 1));
	i = 0;
	while (*str)
	{
		while (*str && check_sep(charset, *str) == 0)
			str++;
		if (*str)
		{
			words[i] = copyword(str, charset);
			i++;
		}
		while (*str && check_sep(charset, *str) == -1)
			str++;
	}
	words[i] = 0;
	return (words);
}
