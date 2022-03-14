/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:19:27 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/14 17:51:34 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_real(int n)
{
	char	*dst;
	char	*src;

	if (n == 0)
		return ("");
	else
	{
		src = "a";
		src[0] = n % 10 + '0';
		dst = ft_itoa_real(n / 10);
		ft_strlcat(dst, src, 12);
		return (dst);
	}
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n < 0)
		return (ft_strjoin("-", ft_itoa_real(n)));
	else
		return (ft_strdup(ft_itoa_real(n)));
}

/*
	str = ft_memset(str, 'a', 13);
	i = 12;
	if (n < 0)
	{
		str[12] = '-';
		n *= -1;
		i--;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n -= n / 10;
		i--;
	}
*/