/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:32:35 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/13 17:46:07 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void);
void	ft_putchar(char c);

/* int	main(void)
{
	ft_print_numbers();
	return (0);
} */

void	ft_print_numbers(void)
{
	int	x;

	x = 48;
	while (x <= 57)
	{
		ft_putchar(x);
		x++;
	}
}
