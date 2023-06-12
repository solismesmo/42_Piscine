/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:21:35 by livieira          #+#    #+#             */
/*   Updated: 2023/06/11 00:02:46 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	unsigned int n = 8;
	char 	dest[] = "oiwerwde";
	char 	src[] = "hello";
	
	ft_strncpy(dest, src, n);
	printf("dest = %s", dest);
} */
