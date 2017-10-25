/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 23:19:00 by sivasysh          #+#    #+#             */
/*   Updated: 2017/10/23 23:19:00 by sivasysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = 1;
	if (argc > 1)
	{
		while (x != argc)
		{
			y = 0;
			while (argv[x][y] != 0)
			{
				ft_putchar(argv[x][y]);
				y++;
			}
			ft_putchar('\n');
			x++;
		}
	}
	return (0);
}
