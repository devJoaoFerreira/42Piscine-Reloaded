/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:42:23 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/14 19:50:29 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putnbr(int x);
void	ft_putchar(char c);

int	main(void)
{
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ft_foreach(tab, 10, &ft_putnbr);
} */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i <= length - 1)
	{
		f(tab[i]);
		i++;
	}
}

/* void	ft_putnbr(int nb)
{
	long int	x;

	x = nb;
	if (x < 0)
	{
		x = -x;
		ft_putchar('-');
	}
	if (x >= 10)
		ft_putnbr(x / 10);
	ft_putchar((x % 10) + '0');
	ft_putchar('\n');
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}
 */