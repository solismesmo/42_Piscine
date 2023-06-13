/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:11:04 by livieira          #+#    #+#             */
/*   Updated: 2023/06/12 19:40:46 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/* int	main(void)
{
	char s1[] = "Hell";
	char s2[] = "Hello";
	
	printf("%d\n", ft_strcmp(s2, s1));
} */
