/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:28:04 by livieira          #+#    #+#             */
/*   Updated: 2023/06/12 21:45:09 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}

/* #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int nb = 8;

	printf("\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("result = %s\n", dest);

	return (0);
} */
