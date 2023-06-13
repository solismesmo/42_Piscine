/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:11:12 by livieira          #+#    #+#             */
/*   Updated: 2023/06/12 20:01:23 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;

	c = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (dest);
}

/* #include <stdio.h>

int		main(void)
{
	char dest[20] = "Hello";
	char src[] = ", world!";

	printf("\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n", dest);
	return (0);
} */