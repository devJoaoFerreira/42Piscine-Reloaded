/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:43:30 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/14 20:11:24 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));
int	ft_isalphal(char *tab);

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_count_if(argv, &ft_isalphal));
	return (0);
} */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (tab[x] != 0)
	{
		if (f(tab[x]) == 1)
			count += 1;
		x++;
	}
	return (count);
}

/* int	ft_isalphal(char *tab)
{
	int	x = 0;

	while (tab[x])
	{
		if (tab[x] < 'a' || tab[x] > 'z')
			return (0);
		x++;
	}
	return(1);
} */
