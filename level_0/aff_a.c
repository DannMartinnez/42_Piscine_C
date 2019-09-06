/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:35:17 by danmarti          #+#    #+#             */
/*   Updated: 2019/07/25 15:26:52 by danmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		ft_putchar('a');
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				return(0);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}
