/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:46:08 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/13 17:07:13 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

/* int	main(void)
{
	int	x = 24;
	int	y = 42;
	int *a = &x;
	int *b = &y;
	ft_swap(a, b);
	printf("a=%d, b=%d", *a, *b);
	return (0);
} */

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
