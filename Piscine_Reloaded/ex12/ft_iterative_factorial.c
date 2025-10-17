/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:06:22 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/14 21:09:06 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

/* int	main(void)
{
	int	nb = 0;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
} */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0 && nb <= 12)
	{
		if (nb == 0)
			return (1);
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
	else
		return (0);
}
