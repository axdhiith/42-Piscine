/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:33:45 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/09 13:58:53 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(char *s1, char *s2, unsigned int i, unsigned int n)
{
	if (i == n)
		return (0);
	else if (!s1[i] && !s2[i])
		return (0);
	else if (!s1[i])
		return (-1);
	else
		return (1);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 0;
	while ((s1[i] && s2[i]) && i < n)
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
		flag = checker(s1, s2, i, n);
	return (flag);
}
