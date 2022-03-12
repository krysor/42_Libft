/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:38:40 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/12 21:05:48 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	ind_lst;
	char	*str;

	ind_lst = ft_strlen(little);
	if (ind_lst == 0)
		return (big);
	ind_lst -= 1;
	i = 0;
	str = (char *)big;
	while (i < len && str[i])
	{
		j = 0;
		while (str[i + j] == little[j])
		{
			if (j == ind_lst)
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
