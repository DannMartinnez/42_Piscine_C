/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:53:51 by danmarti          #+#    #+#             */
/*   Updated: 2019/07/12 13:55:51 by danmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1; 
	if (power < 0)
		return (0);
	else
	{
		while (power-- > 0)
			result = result * nb;
		return result;
	}
}
