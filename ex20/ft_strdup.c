/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:59:04 by sivasysh          #+#    #+#             */
/*   Updated: 2017/10/25 14:59:05 by sivasysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *tdest;
	char *tsrc;

	tdest = dest;
	tsrc = src;
	while (*tsrc != 0)
	{
		*tdest = *tsrc;
		tdest++;
		tsrc++;
	}
	*tdest = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != 0)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char *copy;

	copy = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (src == 0)
		return (0);
	ft_strcpy(copy, src);
	return (copy);
}
