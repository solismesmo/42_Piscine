/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 00:07:28 by livieira          #+#    #+#             */
/*   Updated: 2023/06/15 00:07:48 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 4! = 1 * 2 * 3 * 4
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/* 
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(1));
	return (0);
} */