/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:06:17 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/16 18:57:49 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ind_beg(char const *s1, char const *set)
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

static int	ft_ind_end(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = ft_strlen(s1) - 1;
	if (i == -1)
		return (0);
	j = 0;
	while (set[j] && i >= 0)
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
	size_t	i_beg;
	size_t	i_end;
	size_t	i;

	if ((s1 == NULL && set == NULL) || (s1 == NULL || set == NULL))
		return (NULL);
	i_beg = ft_ind_beg(s1, set);
	i_end = ft_ind_end(s1, set);
	if (i_beg > i_end)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (2 + i_end - i_beg));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i_beg <= i_end)
		str[i++] = s1[i_beg++];
	str[i] = '\0';
	return (str);
}
