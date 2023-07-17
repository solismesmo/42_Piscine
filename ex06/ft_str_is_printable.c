/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 03:38:42 by livieira          #+#    #+#             */
/*   Updated: 2023/06/11 22:35:45 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < ' ' || str[index] > '~')
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char test1[] = "abcxsdeDsw\n";
	char test2[] = "ADfrdtjrtjrturu4363&";
	char test3[] = "AD frdtjrtjrturu4363&";

	printf("%d\n",ft_str_is_printable(test1));
	printf("%d\n",ft_str_is_printable(test2));
	printf("%d\n",ft_str_is_printable(test3));
} */