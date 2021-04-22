/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:50:24 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/20 17:36:19 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	size_t	len;

	len = ft_strlen(s);
	sdup = (char *)malloc(sizeof(char) * (len + 1));
	if (sdup == NULL)
		return (NULL);
	sdup[len] = '\0';
	sdup = (char *)ft_memcpy(sdup, s, len);
	return (sdup);
}