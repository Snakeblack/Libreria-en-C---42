/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:48:22 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/27 17:51:36 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *p, const char *q, size_t slen)
{
	int flag;
	int i;
	int j;

	if (!*q)
		return (&*(char*)p);
	i = 0;
	while (p[i] && slen--)
	{
		flag = slen + 1;
		j = 0;
		while (p[i + j] && (q[j] == p[i + j]) && flag--)
		{
			if (!q[j + 1])
				return ((char *)&p[i]);
			j++;
		}
		i++;
	}
	return (0);
}