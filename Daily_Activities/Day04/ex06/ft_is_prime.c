/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:53:51 by danmarti          #+#    #+#             */
/*   Updated: 2019/07/12 13:55:51 by danmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int div;

	div = 2;
	if (nb <= 0)
		return (0);
	while (div <= (nb / 2))
	{
		if ((nb % div) == 0)
			return (0);
		div++;
	}
	return (1);
}