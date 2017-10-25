/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 20:37:24 by sivasysh          #+#    #+#             */
/*   Updated: 2017/10/23 20:37:24 by sivasysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}
