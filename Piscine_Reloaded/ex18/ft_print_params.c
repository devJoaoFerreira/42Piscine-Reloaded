/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:12:25 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/14 17:50:54 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	if (argc < 2)
		return (0);
	while (argv[x])
	{
		y = 0;
		while (argv[x][y])
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		x++;
		ft_putchar('\n');
	}
	return (0);
}
