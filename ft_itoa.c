/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:00:55 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/25 19:02:17 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nlen(int n, int base)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0 && base == 10)
		len++;
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nlen(n, 10);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i += 1;
	}
	while (i < len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}