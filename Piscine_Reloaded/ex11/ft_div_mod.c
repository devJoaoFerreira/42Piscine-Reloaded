/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:00:31 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/13 17:07:07 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

/* int	main(void)
{
	int a = 8;
	int	b = 3;
	int	x = 0;
	int	y = 0;
	int	*div = &x;
	int	*mod = &y;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d", *mod);
	return (0);
} */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
