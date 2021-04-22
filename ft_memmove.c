/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:39:30 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/27 17:39:21 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;
	char *ls;
	char *ld;

	if (len < 0 || (!dst && !src))
		return (NULL);
	s = (char *)src;
	d = (char *)dst;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		ls = s + (len - 1);
		ld = d + (len - 1);
		while (len--)
			*ld-- = *ls--;
	}
	return (dst);
}