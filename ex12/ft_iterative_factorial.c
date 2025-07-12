/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welsete <welsete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:58:04 by welsete           #+#    #+#             */
/*   Updated: 2025/07/12 16:36:57 by welsete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factor;

	factor = nb - 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (factor > 0)
		{
			nb = nb * factor;
			factor--;
		}
		return (nb);
	}
	else
		return (0);
}
