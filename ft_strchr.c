/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:30:12 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/20 17:02:05 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char ch;
	char *p;

	ch = (char)c;
	p = (char *)s;
	while (*p != '\0')
	{
		if (*p == ch)
			return (p);
		p++;
	}
	if (!c)
		return (p);
	return (0);
}