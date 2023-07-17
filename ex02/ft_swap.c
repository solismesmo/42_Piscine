/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:39:41 by livieira          #+#    #+#             */
/*   Updated: 2023/06/06 19:33:14 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/* #include	<stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 42;

	printf("%d\n", a);
	printf("%d\n", b);

	ft_swap(&a,&b);

	printf("%d\n", a);
	printf("%d\n", b);
}
 */