/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:42:33 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/11 15:33:37 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
