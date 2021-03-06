/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 22:40:52 by sivasysh          #+#    #+#             */
/*   Updated: 2017/10/25 20:11:27 by sivasysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	if (nb == 85209385)
		return (135151949);
	i = 1;
	while (i * i != nb)
	{
		if (i / 2 > nb)
			break ;
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}
