/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:46:09 by lfabiana          #+#    #+#             */
/*   Updated: 2023/05/28 21:52:19 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

int		rush(int x, int y);

void	ft_error_invalid_number(void)
{
	write(1, "invalid number", 14);
}

void	fill_with_the_letter(int line, int col, int curr_li, int curr_co)
{
	if (curr_co == 1 && (curr_li == 1 || curr_li == line))
	{
		ft_putchar('A');
	}
	else if (curr_co == col && (curr_li == 1 || curr_li == line))
	{
		ft_putchar('C');
	}
	else if ((curr_li > 1 && curr_li < line) && (curr_co > 1 && curr_co < col))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

int	rush(int x, int y)
{
	int	count_line;
	int	count_column;

	count_line = 1;
	count_column = 1;
	if (x <= 0 && y <= 0)
	{
		ft_error_invalid_number();
		return (1);
	}
	while (count_line <= x)
	{
		count_column = 1;
		while (count_column <= y)
		{
			fill_with_the_letter(x, y, count_line, count_column);
			count_column++;
		}
		ft_putchar('\n');
		count_line++;
	}
	return (0);
}
