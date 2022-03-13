/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:43:34 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/13 17:58:15 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		ind;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	ind = 0;
	while (len && s[start])
	{
		str[ind++] = s[start++];
		len--;
	}
	str[ind] = '\0';
	return (str);
}
