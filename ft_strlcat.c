/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:48:07 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/25 19:49:48 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	pos;
	size_t	i;
	size_t	j;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size < size_dest)
		return (size + size_src);
	i = 0;
	j = size_dest;
	pos = size - size_dest;
	while (src[i] != '\0' && pos-- > 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (size_dest + size_src);
}