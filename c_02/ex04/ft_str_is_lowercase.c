/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 03:07:49 by livieira          #+#    #+#             */
/*   Updated: 2023/06/11 03:12:49 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'a' || str[index] > 'z')
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char test1[] = "abcxsdessw";
	char test2[] = "abcxsdQQdsw";

	printf("%d\n",ft_str_is_lowercase(test1));

	printf("%d\n",ft_str_is_lowercase(test2));
} */