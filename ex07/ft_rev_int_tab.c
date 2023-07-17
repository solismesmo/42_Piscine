/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:49:12 by livieira          #+#    #+#             */
/*   Updated: 2023/06/06 21:51:13 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab [size -1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

/* #include <stdio.h>
int main(void)
{
	int tab[5] = {0, 1, 2, 3, 4};
	int size = 5;

	ft_rev_int_tab(tab,size);
	printf("%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4]);
	return(0);
} */