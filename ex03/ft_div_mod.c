/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:07:22 by livieira          #+#    #+#             */
/*   Updated: 2023/06/06 19:55:21 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 22;
	b = 10;

	printf("Antes - %d\n", a);
	printf("Antes - %d\n", b);
	ft_div_mod(a,b,&c,&d);
	printf("Depois - %d\n", c);
	printf("Depois - %d\n", d);
} */