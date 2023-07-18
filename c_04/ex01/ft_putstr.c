/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:23:31 by livieira          #+#    #+#             */
/*   Updated: 2023/06/13 14:28:57 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/* #include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "A piscina está acabando 'O' ";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
} */