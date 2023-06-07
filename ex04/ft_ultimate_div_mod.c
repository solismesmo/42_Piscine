/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:38:12 by livieira          #+#    #+#             */
/*   Updated: 2023/06/06 22:00:29 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*b = mod;
	*a = div;
}

/* #include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 22;
	b = 10;

	printf("Antes - %d\n", a);
	printf("Antes - %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("Depois - %d\n", a);
	printf("Depois - %d\n", b);
}
 */