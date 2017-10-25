/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 22:28:54 by sivasysh          #+#    #+#             */
/*   Updated: 2017/10/23 22:28:54 by sivasysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb >= 1 && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
