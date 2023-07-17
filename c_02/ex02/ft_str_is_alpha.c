/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 23:33:41 by livieira          #+#    #+#             */
/*   Updated: 2023/06/11 00:07:08 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 'A') || (str[index] > 'Z' && str[index] < 'a')
			|| (str[index] > 'z'))
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char test1[] = "Abc";
	char test2[] = "Abc123";

	printf("%d\n", ft_str_is_alpha(test1));
	printf("%d\n", ft_str_is_alpha(test2));
} */