/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:42:33 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/10 18:36:54 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	(void)dest;
	(void)src;
	(void)n;
	/*
	int		i;
	char	*temp;

	i = 0;
	while (i < (int)n)
	{
		temp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < (int)n)
	{
		((char *)dest)[i] = temp[i];
		i++;
	}
	*/
	return (dest);
}
