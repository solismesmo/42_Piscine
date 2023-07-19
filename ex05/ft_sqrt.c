/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 00:11:46 by livieira          #+#    #+#             */
/*   Updated: 2023/06/15 01:43:30 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i <= 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
    printf("%d\n", ft_sqrt(7));
} */