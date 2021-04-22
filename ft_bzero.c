/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:02:26 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/08 17:18:26 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *b, size_t len)
{
	unsigned char *p;

	p = b;
	while (len > 0)
	{
		*p = '\0';
		p++;
		len--;
	}
	return (b);
}