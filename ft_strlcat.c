/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:10:36 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/12 16:11:36 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(char *str);

/*
size_t	ft_strlcat(char *dest,
		const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dest[j] && j < destsize)
		j++;
	while ((src[i] && (j + i + 1) < destsize))
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j != destsize)
		dest[j + i] = '\0';
	return (j + ft_strlen((char *)src));
}
*/

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

/*
#include <stdio.h>
 
int	main()
{
	char	dest[15];
	size_t	res;	

	memset(dest, 0, 15);
	memset(dest, 'r', 6);

	dest[10] = 'a';
	res = ft_strlcat(dest, "lorem ipsum dolor sit amet", 6);
	printf("dest: %s \nres: %d", dest, (int)res);
}
*/