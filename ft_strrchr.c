/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:57:39 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/12 17:02:45 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char *)s + i);
	i--;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
