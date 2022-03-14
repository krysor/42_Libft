/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:57:00 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/14 16:15:01 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_zerosubst(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			str[i] = '\0';
		i++;
	}
	return (str);
}

int	ft_strnb(char const *s, char c)
{
	int	p;
	int	nb;

	p = 0;
	nb = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (p == 0)
			{
				nb++;
				p = 1;
			}
		}
		else
			p = 0;
		s++;
	}
	return (nb);
}

char	**ft_arrstr(char **arr, char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (str[i] != '\0')
		{
			arr[j] = ft_strdup(str + i);
			i += ft_strlen(arr[j]);
			j++;
		}
		else
			i++;
	}
	arr[j] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	int		len;

	len = ft_strlen(s);
	str = ft_zerosubst(ft_strdup(s), c);
	arr = ft_arrstr((char **)malloc(sizeof(char *)
				* (ft_strnb(s, c) + 1)), str, len);
	free(str);
	return (arr);
}