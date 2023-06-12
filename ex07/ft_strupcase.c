/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 03:44:22 by livieira          #+#    #+#             */
/*   Updated: 2023/06/11 04:53:05 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char test1[] = "abcxsdefsw";
	char test2[] = "fDrdsFGESturu";

	printf("\n",ft_strupcase(test1));
	printf("\n",ft_strupcase(test2));
}