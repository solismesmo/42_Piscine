/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:22:41 by livieira          #+#    #+#             */
/*   Updated: 2023/06/13 14:22:51 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

/* #include <stdio.h>

int		main (void)
{
	char str[] = "Vou ser cadete!";
	char *p_str;

	p_str = str;

	int count = ft_strlen(p_str);
	
	printf("%d\n", count);
}
 */