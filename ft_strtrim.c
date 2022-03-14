/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:06:17 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/14 11:54:43 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ind_beg(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	ft_ind_end(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = ft_strlen(s1) - 1;
	if (i == -1)
		return (0);
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i_beg;
	int		i_end;
	int		i;

	i_beg = ft_ind_beg(s1, set);
	i_end = ft_ind_end(s1, set);
	str = malloc(sizeof(char) * (2 + i_end - i_beg));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i_beg <= i_end)
		str[i++] = s1[i_beg++];
	str[i] = '\0';
	return (str);
}
