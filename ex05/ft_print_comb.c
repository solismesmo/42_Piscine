/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:52:03 by livieira          #+#    #+#             */
/*   Updated: 2023/06/01 15:48:41 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_number_space(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (!((a == 7) && (b == 8) && (c == 9)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 <= 7)
	{
		n2 = n1 +1;
		while (n2 <= 8)
		{
			n3 = n2 +1;
			while (n3 <= 9)
			{	
				ft_print_number_space(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
