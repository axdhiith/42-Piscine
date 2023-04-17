/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakshmi <alakshmi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:08:21 by alakshmi          #+#    #+#             */
/*   Updated: 2022/08/22 16:44:05 by alakshmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		end;
	char	*temp;

	end = 0;
	while (end == 0)
	{
		i = -1;
		end = 1;
		while (tab[++i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				end = 0;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}
}
