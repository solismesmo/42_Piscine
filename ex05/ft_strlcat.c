/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:50:50 by livieira          #+#    #+#             */
/*   Updated: 2023/06/12 23:04:05 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	if (size < ft_strlen(dest))
		return (ft_strlen(dest) + ft_strlen(&src[d]));
	return (size + ft_strlen(&src[d]));
}

/* #include <stdio.h>

int	main(void)
{
	char			dest[20];
	char			src[];
	unsigned int	size;
	unsigned int	result;

	dest[20] = "123";
	src[] = "4567890";
	size = 6;
	printf("\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("dest (cat) = %s\nresult = %d\n", dest, result);
	return (0);
}
 */