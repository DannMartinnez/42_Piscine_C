/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:33:08 by danmarti          #+#    #+#             */
/*   Updated: 2019/07/11 23:17:44 by danmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_xd(int n, int i, int *a, int j)
{
	while (a[i] <= 9)
	{
		if (i < n - 1)
		{
			a[i + 1] = a[i] + 1;
			ft_xd(n, i + 1, a, j);
		}
		if (i == n - 1)
		{
			while (a[i] <= 9)
			{
				if (a[n - 1] != n - 1)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				while (++j <= n - 1)
					ft_putchar(a[j] + '0');
				a[i] = a[i] + 1;
				j = -1;
			}
		}
		a[i] = a[i] + 1;
	}
}

void	ft_print_combn(int n)
{
	int a[n];
	int i;
	int j;

	j = -1;
	a[0] = 0;
	i = 0;
	ft_xd(n, i, a, j);
}
