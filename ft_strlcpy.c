/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:06:13 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/25 19:42:06 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len;

	if ((!dest && !src) || size < 0)
		return (0);
	j = ft_strlen(dest);
	len = j + size;
	i = 0;
	while (src[i] && ++j < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (j < (j + size))
		dest[i] = '\0';
	else if (size > 0)
		dest[--i] = '\0';
	return (ft_strlen(src));
}