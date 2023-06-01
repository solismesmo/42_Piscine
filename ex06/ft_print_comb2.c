/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:52:03 by livieira          #+#    #+#             */
/*   Updated: 2023/06/01 18:44:22 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_number_space(int a, int b)
{
	ft_putchar((a / 10) + 48);
	ft_putchar((a % 10) + 48);
	ft_putchar(' ');
	ft_putchar((b / 10) + 48);
	ft_putchar((b % 10) + 48);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 +1;
		while (n2 <= 99)
		{
			{
				ft_print_number_space(n1, n2);
				if (!(n1 == 98))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
}
