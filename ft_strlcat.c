/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:10:36 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/11 15:46:51 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	lendst;
	int	i;

	lendst = ft_strlen(dst);
	if ((int)size > lendst + 1)
	{
		i = 0;
		size -= lendst;
		while (size && src[i])
		{
			dst[lendst + i] = src[i];
			i++;
		}
		dst[lendst + i] = '\0';
		return ((size_t)(lendst + ft_strlen((char *)src)));
	}
	return ((size_t)(size + ft_strlen((char *)src)));
}
