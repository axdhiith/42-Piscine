/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:14:26 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/09 13:59:17 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(char *s1, char *s2, int i)
{
	if (!s1[i] && !s2[i])
		return (0);
	else if (!s1[i])
		return (-1);
	else
		return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
		{
			flag = 1;
			break ;
		}
		else
		{
			flag = -1;
			break ;
		}
	}
	if (flag == 0)
		flag = checker(s1, s2, i);
	return (flag);
}
