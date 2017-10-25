/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivasysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 23:26:10 by sivasysh          #+#    #+#             */
/*   Updated: 2017/10/23 23:26:11 by sivasysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char ch);

int			ft_strcmp(char *s1, char *s2)
{
	while (!(*s1 == 0 && *s2 == 0))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void		ft_print_param(int argc, char **argv)
{
	int		x;
	int		y;

	x = 1;
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

int			main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*temp;

	x = 1;
	if (argc > 1)
	{
		while (x != argc - 1)
		{
			y = 1;
			while (y != argc - 1)
			{
				if (ft_strcmp(argv[y], argv[y + 1]) > 0)
				{
					temp = argv[y];
					argv[y] = argv[y + 1];
					argv[y + 1] = temp;
				}
				y++;
			}
			x++;
		}
		ft_print_param(argc, argv);
	}
	return (0);
}
