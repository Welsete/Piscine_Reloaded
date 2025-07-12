/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:57:18 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 12:57:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return(0);
	if (nb == 0)
		return(1);
	return (nb * ft_iterative_factorial(nb - 1));
}
