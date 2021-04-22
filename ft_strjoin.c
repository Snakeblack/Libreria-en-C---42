/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:01:45 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/25 19:07:27 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, const char *src)
{
	ft_strcpy((dest + ft_strlen(dest)), src);
	return (dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;

	dest = NULL;
	if (s1 && s2)
	{
		dest = (char *)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!dest)
			return (NULL);
		ft_strcpy(dest, s1);
		ft_strcat(dest, s2);
	}
	return (dest);
}