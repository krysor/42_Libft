/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:42:33 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/12 18:44:50 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)src;
	if (src > dest)
	{
		while (i < (int)n)
		{
			((char *)dest)[i] = temp[i];
			i++;
		}	
	}
	else
	{
		while (i < (int)n)
		{
			((char *)dest)[n - 1 - i] = temp[n - 1 - i];
			i++;
		}	
	}
	return (dest);
}
