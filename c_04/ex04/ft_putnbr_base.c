/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:57:03 by livieira          #+#    #+#             */
/*   Updated: 2023/06/13 21:55:18 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* int	ft_check_base(char	*base)
{
	int	i;
	int	z;

	i = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		if (!((base[i] >= '0' && base[i] <= '9')))
			return (0);
			z = i + 1;














		
	}		
}





		//|| (base[i] >= 'a' && base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))


int	main(void)
{
	int		nbr;
	char	*base;

	nbr = 876;
	base = "01";

	write(1, " - binary\n,", 12);

	base = "0123456789ABCDEF";

	ft_putnbr_base(nbr, base);

	write(1, " - hex\n", 8);

	return (0);
} */