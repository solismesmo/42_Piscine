/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:48:49 by livieira          #+#    #+#             */
/*   Updated: 2023/06/11 03:07:26 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{

	char test1[] = "01234";
	char test2[] = "0123456abC";

	printf("%d\n", ft_str_is_numeric(test1));
	printf("%d\n", ft_str_is_numeric(test2));
} */
