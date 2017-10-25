/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 15:10:38 by sivasysh          #+#    #+#             */
/*   Updated: 2017/10/25 20:26:49 by sivasysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int x;

	if (min >= max)
		return (0);
	x = 0;
	if (!(array = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		array[x] = min;
		x++;
		min++;
	}
	return (array);
}
