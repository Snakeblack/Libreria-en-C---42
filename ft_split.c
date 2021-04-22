/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:09:41 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/26 18:50:35 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wlen(const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i += 1;
	while (s[i] != c && s[i++])
		len += 1;
	return (len);
}

static size_t	ft_wcount(char const *s, char c)
{
	unsigned int	i;
	size_t			j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			j++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (j);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**arr;

	i = 0;
	k = 0;
	if (!s || !(arr = (char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1))))
		return (NULL);
	while (i < ft_wcount(s, c))
	{
		if (!(arr[i] = (char *)malloc(sizeof(char) * (ft_wlen(&s[k], c) + 1))))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			arr[i][j++] = s[k++];
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}