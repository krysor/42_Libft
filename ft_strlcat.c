/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:10:36 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/12 18:45:25 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	nbs_to_add;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	if (size > len_dst)
	{
		index = 0;
		nbs_to_add = size - len_dst - 1;
		while (nbs_to_add && src[index])
		{
			dst[len_dst + index] = src[index];
			index++;
			nbs_to_add--;
		}
		if (index < size)
			dst[len_dst + index] = '\0';
		return (len_dst + len_src);
	}
	return (size + len_src);
}
