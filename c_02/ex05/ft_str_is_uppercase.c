/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 03:34:20 by livieira          #+#    #+#             */
/*   Updated: 2023/06/11 03:37:35 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'Z')
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char test1[] = "AAAAA";
	char test2[] = "A765fcghR";

	printf("%d\n",ft_str_is_uppercase(test1));
	printf("%d\n",ft_str_is_uppercase(test2));
} */