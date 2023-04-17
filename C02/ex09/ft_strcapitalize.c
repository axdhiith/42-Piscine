/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:46:25 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/08 17:02:33 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i];
			c += 32;
			str[i] = c;
		}
		i++;
	}
	return (str);
}

int	checkfn(char c)
{
	if (c >= 'a' && c <= 'z')
		return (-1);
	else if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;
	int		check;

	i = 0;
	flag = 0;
	ft_lowercase(str);
	while (str[i])
	{
		check = checkfn(str[i]);
		if (check == -1)
		{
			if (flag == 0)
				str[i] -= 32;
			flag = 1;
		}
		else if (check == 0)
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (str);
}
