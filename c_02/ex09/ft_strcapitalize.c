/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:29:49 by livieira          #+#    #+#             */
/*   Updated: 2023/06/11 21:39:37 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i_check;

	i = 0;
	i_check = 0;
	while (str[i] != '\0')
	{
		if (i_check == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			i_check++;
		}
		else if (i_check > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			i_check = 0;
		else
			i_check++;
		i++;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char src[] = "oi, tuDo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(src);
	printf("%s\n", src);
} */