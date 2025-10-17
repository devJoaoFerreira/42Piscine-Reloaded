/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:29:55 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/13 17:45:33 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);

/* int	main(void)
{
	char *str = "ola tudo, bem?";
	ft_putstr(str);
	return (0);
} */

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
}
